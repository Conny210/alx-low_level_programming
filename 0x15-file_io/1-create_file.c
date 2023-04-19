#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - Creates file
 *
 * @filename: filename
 *
 * @text_content: NULL terminated string
 *
 * Return: 1 (Success) or -1 (Fail)
 */

int create_file(const char *filename, char *text_content)
{
	int ox, wx, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	ox = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wx = write(ox, text_content, length);

	if (ox == -1 || wx == -1)
		return (-1);

	close(ox);

	return (1);
}
