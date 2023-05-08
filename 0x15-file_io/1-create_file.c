#include "main.h"

/**
 * create_file -  function that creates a file
 * @filename: the name of the file
 * @text_content: NULL terminated string
 * Return: -1 if failed or 1
 */

int create_file(const char *filename, char *text_content)
{
	int n, i = 0, w;

	if (filename == NULL)
		return (-1);

	n = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (n == -1)
		return (-1);

	if (text_content[i] != '\0')
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
	}

	w = write(n, text_content, i);

	if (w == -1)
		return (-1);

	close(n);
	return (1);
}
