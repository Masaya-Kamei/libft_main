#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n);

int main(void)
{
	char *str1 = ft_itoa(42);
	printf("ft_itoa(42)		:%s\n", str1);

	char *str2 = ft_itoa(-42);
	printf("ft_itoa(-42)		:%s\n", str2);

	char *str3 = ft_itoa(0);
	printf("ft_itoa(0)		:%s\n", str3);

	char *str4 = ft_itoa(-2147483648);
	printf("ft_itoa(-2147483648)	:%s\n", str4);

	free(str1);
	free(str2);
	free(str3);
	free(str4);
	return (0);
}
