#include <stdio.h>
#include <ctype.h>

int		ft_isalnum(int c);

int main(void)
{
	printf("[case 1]\n");
	printf("	isalnum		:%d\n", isalnum(	'z'));
	printf("	ft_isdalnum	:%d\n", ft_isalnum(	'z'));

	//////////////////////////////////////////////
	printf("[case 2]\n");
	printf("	isalnum		:%d\n", isalnum(	'0'));
	printf("	ft_isdalnum	:%d\n", ft_isalnum(	'0'));

	//////////////////////////////////////////////
	printf("[case 3]\n");
	printf("	isalnum		:%d\n", isalnum(	0));
	printf("	ft_alnum	:%d\n", ft_isalnum(	0));

	return (0);
}
