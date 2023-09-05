#include"main.h"

/**
 * read_textfile - function to read from a text
 * @filename: the name of the file
 * @letters: number of letters
 * Return: bytes
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize__t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, &buf[0], letters);
	bytes = write(STDOUT_FILNO, &buf[0], bytes);
	close(fd);
	return (bytes);
}
