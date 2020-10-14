#include <stdio.h>

void	ft_putnbr_fd(int n, int fd);

int main(void)
{
	printf("ft_putnbr(42, 1)	:");
	fflush(stdout);
	ft_putnbr_fd(42, 1);
	printf("\n");

	printf("ft_putnbr(-42, 1)	:");
	fflush(stdout);
	ft_putnbr_fd(-42, 1);
	printf("\n");

	printf("ft_putnbr(0, 1)		:");
	fflush(stdout);
	ft_putnbr_fd(0, 1);
	printf("\n");

	return (0);
}
