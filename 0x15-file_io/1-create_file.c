#include "main.h"

/**
* create_file - creates file with read and write permissions
* @filename: name of the file to create
* @text_content: null terminated string to put in filename
* Return: 1 success, -1 failure
*/
int create_file(const char *filename, char *text_content)
{
	int i, wr, fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDONLY | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (i = 0; text_content[i]; i++)

	wr = write(fd, text_content, i);

	if (wr != i)
		return (-1);

	close(fd);

	return (1);
}
