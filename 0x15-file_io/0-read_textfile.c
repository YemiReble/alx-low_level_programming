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
	ssize_t length_r, length_w;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	length_r = read(fd, buffer, letters);
	if (length_r < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[length_r] = '\0';
	close(fd);

	length_w = write(STDOUT_FILENO, buffer, length_r);
	free(buffer);
	if (length_w < 0)
		return (0);
	return (length_w);
}
