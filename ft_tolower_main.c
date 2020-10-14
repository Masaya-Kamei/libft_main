#include <stdio.h>
#include <ctype.h>

int		ft_tolower(int c);

int main(void)
{
	printf("[case 1]\n");
	printf("	tolower		:%c\n", tolower(	'A'));
	printf("	ft_tolower	:%c\n", ft_tolower(	'A'));

	///////////////////////////////////////////////////
	printf("[case 2]\n");
	printf("	tolower		:%c\n", tolower(	'1'));
	printf("	ft_tolower	:%c\n", ft_tolower(	'1'));

	return (0);
}
