#include "main.h"

/**
  * read_textfile - function that reads a text file and
  *		prints it to the POSIX standard output.
  * @filename: pointer to file
  * @letters: sum of of alphabets variable
  *
  * Return: the actual number of letter it coulde read and print.
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lenght_r, lenght_w;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	lenght_r = read(fd, buffer, letters);
	close(fd);
	if (lenght_r == -1)
	{
		free(buffer);
		return (0);
	}
	lenght_w = read(STDOUT_FILENO, buffer, letters);
	free(buffer);
	if (lenght_r != lenght_w)
		return (0);
	return (lenght_w);
}
