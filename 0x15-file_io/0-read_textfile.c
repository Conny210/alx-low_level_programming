#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Reads text file and prints contents to POSIX standard output
 *
 * @filename: filename
 *
 * @letters: number of letters to read and print
 *
 * Return: number of letters program can read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ox, rx, wx;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	ox = open(filename, O_RDONLY);
	rx = read(ox, buff, letters);
	wx = write(STDOUT_FILENO, buff, rx);

	if (ox == -1 || rx == -1 || wx == 1 || wx != rx)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(ox);

	return (wx);
}
