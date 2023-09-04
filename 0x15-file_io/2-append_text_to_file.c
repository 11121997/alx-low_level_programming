#include "main.h"

/**
 * _strlen - gets length of string
 * @s: string
 * Return: the length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	if (*s++)
		i++;
	return (i);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: string to add at the end of the file
 * Return: 1 on success, -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (!fd)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
