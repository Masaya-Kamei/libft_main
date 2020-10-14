#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c);

int main(void)
{
	printf("[case 1]\n");
	printf("	strchr		:%s\n",	strchr(		"abcdefgh", 'f'));
	printf("	ft_strchr	:%s\n", ft_strchr(	"abcdefgh", 'f'));

	printf("[case 2]\n");
	printf("	strchr		:%s\n", strchr(		"abcdefgh", 'z'));
	printf("	ft_strchr	:%s\n", ft_strchr(	"abcdefgh", 'z'));

	printf("[case 3]\n");
	printf("	strchr		:%s\n", strchr(		"abcd\0efgh", '\0'));
	printf("	ft_strchr	:%s\n", ft_strchr(	"abcd\0efgh", '\0'));

	return (0);
}
