#include <stdio.h>
#include <ctype.h>

int		ft_isdigit(int c);

int main(void)
{
	printf("[case 1]\n");
	printf("	isdigit		:%d\n", isdigit(	'0'));
	printf("	ft_isdigit	:%d\n", ft_isdigit(	'0'));

	////////////////////////////////////////////
	printf("[case 2]\n");
	printf("	isdigit		:%d\n", isdigit(	0));
	printf("	ft_isdigit	:%d\n", ft_isdigit(	0));

	return (0);
}
