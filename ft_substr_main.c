#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s1, unsigned int start, size_t len);

int main(void)
{
	char *sub1 =  ft_substr("abcdef", 2, 3);
	printf("ft_substr(\"abcdef\", 2, 3)	:%s\n", sub1);

	char *sub2 = ft_substr("abcdef", 2, 10);
	printf("ft_substr(\"abcdef\", 2, 10)	:%s\n", sub2);

	char *sub3 = ft_substr("abcdef", 10, 3);
	printf("ft_substr(\"abcdef\", 10, 3)	:%s\n", sub3);

	char *sub4 = ft_substr("", 2, 3);
	printf("ft_substr(NULL, 2, 3)		:%s\n", sub4);

	char *sub5 = ft_substr("abcedf", 2, 0);
	printf("ft_substr(\"abcdef\"), 2, 0)	:%s\n", sub5);

	free(sub1);
	free(sub2);
	free(sub3);
	free(sub4);
	free(sub5);
	return (0);
}
