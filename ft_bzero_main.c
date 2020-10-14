#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n);

int main(void)
{
	char str1[] = "0123456789";
	char str2[] = "0123456789";

	bzero(str1 + 2, 5);
	printf("bzero		:%s\n", str1);

	ft_bzero(str2 + 2, 5);
	printf("ft_bzero	:%s\n", str2);

	return (0);
}
