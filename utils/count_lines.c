#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char		*pathname;
	int			j;
	int			fd;
	char		*buf;
	size_t		nbytes;
	ssize_t		rd;
/*
	char		*text;

	text = (char *)malloc((2) * sizeof(char));
	if (text == NULL)
		return (NULL);
	bytes_read_on_file = read(fd, text, 1);
*/
	pathname = (char *)malloc(sizeof(char));
	pathname = argv[1];
	fd = open( pathname , O_RDONLY);
	rd = read(fd, pathname, 1);
		printf("%c\n", fd);
		printf("%s\n", pathname);
		// while (rd != NULL)
		// {
		// 	if(rd == '\n')
		// 		++j;
		// }
		// j++;
		close(fd);
		printf("%zd\n", rd);

	return 0;
}

// ssize_t read(int fildes, void *buf, size_t nbyte);





