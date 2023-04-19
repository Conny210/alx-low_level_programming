#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFSIZE 1024

static ssize_t read_file(char *file, char **buf, int fd);
static void write_copy(char *file, int fd, char *buf, int len);

/**
 * main - Program copies content from one file to another
 *
 * @c: Count
 *
 * @v: Values
 *
 * Return: 0 (SUCCESS)
 */

int main(int c, char *v[])
{
	int x0, x1, xlength, xerror;
	char *buffer, *file_from, *file_to;

	buffer = NULL;
	xlength = 1;

	if (c != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = v[1];
	file_to = v[2];
	x0 = open(file_from, O_RDONLY);
	x1 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (xlength > 0)
	{
	xlength = read_file(file_from, &buffer, x0);
	if (!xlength)
		break;

	write_copy(file_to, x1, buffer, xlength);
	}

	free(buffer);
	xerror = close(x0);
	if (xerror < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", x0);
		exit(100);
	}
	xerror = close(x1);
	if (xerror < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", x1);
		exit(100);
	}
	return (0);
}

/**
 * read_file - function reads file
 *
 * @file: file
 *
 * @buffer: buffer
 *
 * @xd: descriptors
 *
 * Return: the current size of the buffer
 */

static ssize_t read_file(char *file, char **buffer, int xd)
{
	int xlength;

	if (xd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	if (!(*buffer))
		*buffer = malloc(sizeof(char) * BUFSIZE);
	if (!(*buffer))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	xlength = read(xd, *buffer, BUFSIZE);
	if (xlength < 0)
	{
		free(*buffer);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	return (xlength);
}

/**
 * write_copy - write to file
 *
 * @file: file
 *
 * @xd: descriptors
 *
 * @buffer: buffer
 *
 * @length: size of buffer
 */

static void write_copy(char *file, int xd, char *buffer, int length)
{
	if (xd < 0 || !buffer)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	if (write(xd, buffer, length) < 0)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
}


