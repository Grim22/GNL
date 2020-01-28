
#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <stdio.h>


int	ft_get(int fd, char **line)
{
	int ret = 0;
	if ((ret = get_next_line(fd, line)) == -1)
	{
		printf("error reading the file\n");
		return (-1);
	}
	//printf("ret: %d\n",ret);
	return (ret);
}

int main(int ac, char **av)
{
	int fd1;
	int fd2;
	int fd3;
	char *line = "Hey";

	if (ac == 4)
	{
	fd1 = open(av[1], O_RDONLY);
	fd2 = open(av[2], O_RDONLY);
	fd3 = open(av[3], O_RDONLY);
	
	ft_get(fd1, &line);
	printf("line %d: %s\n", fd1, line);
	free(line);
	ft_get(fd2, &line);
	printf("line %d: %s\n", fd2, line);
	free(line);
	ft_get(fd2, &line);
	free(line);
	ft_get(fd3, &line);
	printf("line %d: %s\n", fd3, line);
	free(line);
	while (ft_get(fd1, &line))
		{
		printf("line %d: %s\n", fd1, line);
		free(line);
		}
	printf("line %d: %s\n", fd1, line);
	free(line);
	ft_get(fd1, &line);
	printf("line %d: %s\n", fd1, line);
	while (ft_get(fd2, &line))
		{
		printf("line %d: %s\n", fd2, line);
		free(line);
		}
	printf("line %d: %s\n", fd2, line);
	free(line);
	ft_get(fd2, &line);
	printf("line %d: %s\n", fd1, line);
	while (ft_get(fd3, &line))
		{
		printf("line %d: %s\n", fd3, line);
		free(line);
		}
	printf("line %d: %s\n", fd3, line);
	free(line);
	ft_get(fd3, &line);
	printf("line %d: %s\n", fd3, line);
	}
}
