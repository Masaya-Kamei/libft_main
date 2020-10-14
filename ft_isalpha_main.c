#include <stdio.h>
#include <ctype.h>

int		ft_isalpha(int c);

int main(void)
{
	printf("[case 1]\n");
	printf("	isalpha		:%d\n", isalpha(	'a'));
	printf("	ft_isalpha	:%d\n", ft_isalpha(	'a'));

	///////////////////////////////////////////////
	printf("[case 2]\n");
	printf("	isalpha		:%d\n", isalpha(	'Z'));
	printf("	ft_isalpha	:%d\n", ft_isalpha(	'Z'));

	///////////////////////////////////////////////
	printf("[case 3]\n");
	printf("	isalpha		:%d\n", isalpha(	'5'));
	printf("	ft_isalpha	:%d\n", ft_isalpha(	'5'));

	return (0);
}
