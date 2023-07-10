#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to STDOUT.
 * @filename: The name of the text file to be read.
 * @letters: The number of letters to be read.
 *
 * Return: The actual number of bytes read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
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
