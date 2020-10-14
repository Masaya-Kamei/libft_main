#include <stdio.h>
#include <ctype.h>

int		ft_toupper(int c);

int main(void)
{
	printf("[case 1]\n");
	printf("	toupper		:%c\n", toupper(	'z'));
	printf("	ft_toupper	:%c\n", ft_toupper(	'z'));

	/////////////////////////////////////////////
	printf("[case 2]\n");
	printf("	toupper		:%c\n", toupper(	'1'));
	printf("	ft_toupper	:%c\n", ft_toupper(	'1'));

	return (0);
}
