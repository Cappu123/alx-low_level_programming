#include "main.h"
#include "unistd.h"
#include <sys/types.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_text_file - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: size
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer = malloc(letters);
	ssize_t c, w;

	if (!filename)
		return (0);

	if (!buffer)
		return (0);
	fd = open(filename, 0_RONLy);
	if (fd == -1)
		return (0);
	c = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, c);
	free(buffer);
	close(fd);
	return (w);
}
