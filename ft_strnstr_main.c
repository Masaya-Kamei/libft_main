#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t len);

int main(void)
{
	printf("[case 1]\n");
	printf("	strnstr		:%s\n", strnstr(	"abcdefgh", "def", 7));
	printf("	ft_strnstr	:%s\n", ft_strnstr(	"abcdefgh", "def", 7));

	///////////////////////////////////////
	printf("[case 2]\n");
	printf("	strnstr		:%s\n", strnstr(	"abcdefgh", "def", 6));
	printf("	ft_strnstr	:%s\n", ft_strnstr(	"abcdefgh", "def", 6));

	///////////////////////////////////////
	printf("[case 3]\n");
	printf("	strnstr		:%s\n", strnstr(	"abcdefgh", "dec", 10));
	printf("	ft_strnstr	:%s\n", ft_strnstr(	"abcdefgh", "dec", 10));

	///////////////////////////////////////
	printf("[case 4]\n");
	printf("	strnstr		:%s\n", strnstr(	"abcdefgh", "", 10));
	printf("	ft_strnstr	:%s\n", ft_strnstr(	"abcdefgh", "", 10));


	return (0);
}
