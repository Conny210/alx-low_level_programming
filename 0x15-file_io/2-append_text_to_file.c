#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * append_text_to_file - Appends text
 *
 * @filename: Filename
 *
 * @text_content: String to be added
 *
 * Return: 1 (Success) or -1 (Fail)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int ox, wx, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	ox = open(filename, O_WRONLY | O_APPEND);
	wx = write(ox, text_content, length);

	if (ox == -1 || wx == -1)
		return (-1);

	close(ox);

	return (1);
}
