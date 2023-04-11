#include "main.h"

/**
* read_textfile - function that reads a text file and prints it to POSIX
* @filename: name of the file to be read
* @letters: number of letters to be read and printed out
* Return: actual number of letters it could read and print
* if file can't be opened or read, return 0, if filename is NULL, return 0
* if write fails or does not write the expected amount of bytes, return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t r, w;
	int fd;

	if (!filename)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	r = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (fd == -1 || r == -1 || w == -1 || w != r)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);

	return (w);
}

