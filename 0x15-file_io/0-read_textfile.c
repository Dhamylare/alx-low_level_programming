#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: name of the file
* @letters: number of letters to read and print
* Return: 0 if file can't open or read or if filename is NULL or writes fail
*/
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	ssize_t rid, wrt;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	rid = read(fd, buffer, letters);
	if (rid == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	wrt = write(STDOUT_FILENO, buffer, rid);
	if (wrt == -1)
	{
		free(buffer);
		return (0);
	}
	if (wrt != rid)
		return (0);
	return (rid);
}
