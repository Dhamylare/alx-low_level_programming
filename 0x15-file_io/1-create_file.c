#include "main.h"
/**
* create_file - creates a file
* @text_content: is a NULL terminated string to be writen to the file
* @filename: name of the file
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd, wrt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(fd, text_content, len);

	if (fd == -1 || wrt == -1)
		return (-1);

	close(fd);

	return (1);
}
