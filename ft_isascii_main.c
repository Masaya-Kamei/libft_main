#include <stdio.h>
#include <ctype.h>

int		ft_isascii(int c);

int main(void)
{
	printf("[case 1]\n");
	printf("	isascii		:%d\n", isascii(	'\0'));
	printf("	ft_isascii	:%d\n", ft_isascii(	'\0'));

	/////////////////////////////////////////////////////
	printf("[case 2]\n");
	printf("	isascii		:%d\n", isascii(	128));
	printf("	ft_isascii	:%d\n", ft_isascii(	128));

	return (0);
}
