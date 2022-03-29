#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: name of the file to create
* @text_content: null terminated string to put in filename
* Return: 1 success, -1 failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, wr, fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0664);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (-1);

	while (text_content[i])
		i++;

	wr = write(fd, text_content, i);
	if (wr != i)
		return (-1);

	close(fd);

	return (1);
}
