#include "main.h"

/**
 * read_textfile - Reads a textfile and prints it to the 'POSIX' stdout
 * @filename: Receives input during function call
 * @letters: Receives input during function call
 *
 * Return: int
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	unsigned long int actPrinted, output;
	char *content;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	content = malloc(sizeof(char) * letters);
	if (content == NULL)
		return (0);

	actPrinted = read(fd, content, letters);
	output = write(STDOUT_FILENO, content, actPrinted);

	close(fd);

	free(content);

	return (output);
}
