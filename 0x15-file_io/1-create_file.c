#include "main.h"
#include <stdlib.h>

/**
 * create_file - Creates a file
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a null terminated  string to write to the file.
 *
 * Return: If the function fails -1.
 *         Otherwise  1.
 */
int create_file(const char *filename, char *text_content)
{
	int op, temp, i;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	temp = write(op, text_content, i);
	if (op == -1 || temp == -1)
		return (-1);
	close(op);
	return (1);
}
