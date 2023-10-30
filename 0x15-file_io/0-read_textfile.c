#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- the text filr is read tp thr stdout
 * @filename: the text fiile to  reead
 * @letters: no of letters to rread
 * Return: actual no of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t w;
ssize_t t;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);
free(buf);
close(fd);
return (w);
}
