#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *str);

int main(void)
{
	printf("[case 1]\n");
	printf("	atoi	:%d\n", atoi(	"123"));
	printf("	ft_atoi	:%d\n", ft_atoi("123"));

	/////////////////////////////////////////////
	printf("[case 2]\n");
	printf("	atoi	:%d\n", atoi(	"	12ab12"));
	printf("	ft_atoi	:%d\n", ft_atoi("	12ab12"));

	/////////////////////////////////////////////
	printf("[case 3]\n");
	printf("	atoi	:%d\n", atoi(	"-123"));
	printf("	ft_atoi	:%d\n", ft_atoi("-123"));

	//////////////////////////////////////////////
	printf("[case 4]\n");
	printf("	atoi	:%d\n", atoi(	"-+123"));
	printf("	ft_atoi	:%d\n", ft_atoi("-+123"));

	//////////////////////////////////////////////
	printf("[case 5]\n");
	printf("	atoi	:%d\n", atoi(	"a123"));
	printf("	ft_atoi	:%d\n", ft_atoi("a123"));

	//////////////////////////////////////////////
	printf("[case 6]\n");
	printf("	atoi	:%d\n", atoi(	""));
	printf("	ft_atoi	:%d\n", ft_atoi(""));

	//////////////////////////////////////////////
	// printf("[case 7]\n");
	// long の範囲外
	// printf("	atoi	:%d\n", atoi(	"2147483648"));		//-2147483648
	// printf("	ft_atoi	:%d\n", ft_atoi("2147483648"));		//-2147483648
	// printf("	atoi	:%d\n", atoi(	"-2147483649"));	//2147483647
	// printf("	ft_atoi	:%d\n", ft_atoi("-2147483649"));	//2147483647
	// unsigned int の範囲外
	// printf("	atoi	:%d\n", atoi(	"4294967296"));				// 0
	// printf("	ft_atoi	:%d\n", ft_atoi("4294967296"));				// 0
	// printf("	atoi	:%d\n", atoi(	"-4294967297"));			// -1
	// printf("	ft_atoi	:%d\n", ft_atoi("-4294967297"));			// -1
	// long long の範囲外
	// printf("	atoi	:%d\n", atoi(	"9223372036854775808"));	// -1
	// printf("	ft_atoi	:%d\n", ft_atoi("9223372036854775808"));	// -1
	// printf("	atoi	:%d\n", atoi(	"-9223372036854775809"));	// 0
	// printf("	ft_atoi	:%d\n", ft_atoi("-9223372036854775809"));	// 0

	return (0);
}
