#include "main.h"

/**
 * read_textfile - read from file and print it to terminal
 * @filename: name of the file we read from
 * @letters: size of letters we read
 * Return: number of bytes, 0 on error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(fd);
	return (bytes);
}
