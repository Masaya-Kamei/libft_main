#include <stdio.h>

void	ft_putendl_fd(char *s, int fd);

int main(void)
{
	printf("ft_putendl_fd(\"abc\", 1)	:");
	fflush(stdout);
	ft_putendl_fd("abc", 1);

	return (0);
}
