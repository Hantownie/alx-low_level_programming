#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *cbuffer(char *file);
void cfile(int fd);

/**
 * cbuffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *cbuffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * cfile - Closes file descriptors.
 * @fd: File descriptor
 */
void cfile(int fd)
{
	int o;

	o = close(fd);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int one, two, re, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = cbuffer(argv[2]);
	one = open(argv[1], O_RDONLY);
	re = read(one, buffer, 1024);
	two =  open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (one == -1 || re == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wr = write(two, buffer, re);
		if (two == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		re =  read(one, buffer, 1024);
		two = open(argv[2], O_WRONLY | O_APPEND);
	} while (re > 0);
	free(buffer);
	cfile(one);
	cfile(two);
	return (0);
}

