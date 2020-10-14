#include <stdio.h>
#include <ctype.h>

int		ft_isprint(int c);

int main(void)
{
	printf("[case 1]\n");
	printf("	isprint		:%d\n", isprint(	' '));
	printf("	ft_isprint	:%d\n", ft_isprint(	' '));

	/////////////////////////////////////////////////////
	printf("[case 2]\n");
	printf("	isprint		:%d\n", isprint(	'\0'));
	printf("	ft_isprint	:%d\n", ft_isprint(	'\0'));

	return (0);
}
