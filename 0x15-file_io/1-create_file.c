#include "main.h"

/**
  * create_file - a function that creates a file.
  * @filename: being the vriable for file to be created
  * @text_content: the content of the file created
  *
  * Return: if filename is NULL return -1
  *	if text_content is NULL create an empty file
  */

int create_file(const char *filename, char *text_content)
{
	int fd, num_let, rw;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (num_let = 0; text_content[num_let]; num_let++)
		;

	rw = write(fd, text_content, num_let);

	if (rw == -1)
		return (-1);

	close(fd);

	return (1);
}
