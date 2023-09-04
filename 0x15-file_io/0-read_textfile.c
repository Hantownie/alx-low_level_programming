#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file to print to standard output
 * @filename: text file
 * @letters: number of letters to be read
 * Return: number of bytes read and printed or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t temp;
	ssize_t i;
	char *op;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	op = malloc(sizeof(char) * letters);
	temp = read(fd, op, letters);
	i = write(STDOUT_FILENO, op, temp);
	free(op);
	close(fd);
	return (i);
}
