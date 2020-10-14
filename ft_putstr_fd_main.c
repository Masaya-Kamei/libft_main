#include <stdio.h>

void	ft_putstr_fd(char *s, int fd);

int main(void)
{
	printf("ft_putstr_fd(\"abc\", 1)	:");
	fflush(stdout);
	ft_putstr_fd("abc", 1);
	printf("\n");

	return (0);
}
