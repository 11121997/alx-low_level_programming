#include "main.h"

/**
 * _strlen - function find length of string
 * @s: string
 * Return: length of string, 0 on error
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - function that creates a file
 * @filename: name of file i want to creat
 * @text_content: text to be write in file
 * Return: 1 on success, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, length = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY, O_CREAT, O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	while (length)
		bytes = write(fd, text_content, length);
	close(fd);
	return (bytes == length ? 1 : -1);
}
