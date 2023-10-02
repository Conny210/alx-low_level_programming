#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - function
 * @filename:pointer to  filenaneme
 * @letters: ...
 *
 * Return: ...
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}

	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}

	char *buffer = (char *)malloc(letters + 1);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	ssize_t bytes_read = fread(buffer, sizeof(char), letters, file);

	if (bytes_read <= 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	buffer[bytes_read] = '\0';

	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	fclose(file);
	free(buffer);

	if (bytes_written != bytes_read)
	{
		return (0);
	}
	return (bytes_written);
}

