#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
int main()
{
	int fd, i;
	char *li;
	li = malloc(sizeof(char));
	li[0] = '1';
	fd = open("a.txt",O_RDONLY);
	get_next_line(fd, &li);
	printf("%s",li);
	close(fd);
}