/*
** EPITECH PROJECT, 2021
** csv_parser.c
** File description:
** Prototypes in parsing.h
*/

#include "include/my.h"
#include "include/helper.h"

void output_error(char *message)
{
    int message_len = my_strlen(message);

    write(2, message, message_len);
}

char *read_file(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char *buffer = NULL;
    struct stat sb;

    stat(filepath, &sb);
    buffer = malloc(sizeof(char) * (sb.st_size + 1));
    memset(buffer, 0, sizeof(char) * (sb.st_size + 1));
    if (fd < 0) {
        output_error("File opening failed.\n");
        return NULL;
    }
    read(fd, buffer, sb.st_size);
    close(fd);
    return buffer;
}

csv *parse_info(char *content)
{
    int comma_count = 0;
    int i;
    int in_word = 0;
    csv *output = malloc(sizeof(csv));
    char **content_lines = NULL;

    if (!content || !output)
        return NULL;
    for (i = 0; content[i] && content[i] != '\n'; i++)
        comma_count = (content[i] == ';') ? comma_count + 1 : comma_count;
    content_lines = my_str_to_word_array(content, '\n', in_word);
    for (i = 0; content_lines[i]; i++);
    output->n_rows = i - 1;
    output->n_columns = comma_count + 1;
    output->labels = my_str_to_word_array(content_lines[0], ';', in_word);
    free_char_table(content_lines);
    return output;
}

csv *parse_data(char *content, csv *output)
{
    int in_word = 0;
    char **content_lines = my_str_to_word_array(content, '\n', in_word);

    output->data = malloc(sizeof(char **) * (output->n_rows + 1));
    if (output->data == NULL)
        return NULL;
    for (int i = 1; content_lines[i]; i++)
        output->data[i - 1] = my_str_to_word_array(content_lines[i], ';', in_word);
    output->data[output->n_rows] = NULL;
    free_char_table(content_lines);
    return output;
}

csv *parse_csv(char *filepath)
{
    char *content = read_file(filepath);
    csv *output = parse_info(content);

    if (!output)
        return NULL;
    output = parse_data(content, output);
    free(content);
    return output;
}