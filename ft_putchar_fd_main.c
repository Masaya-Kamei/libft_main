#include <stdio.h>

void	ft_putchar_fd(char c, int fd);

int main(void)
{
	printf("ft_putchar_fd('A', 1)	:");
	fflush(stdout);
	ft_putchar_fd('A', 1);
	printf("\n");

	return (0);
}
