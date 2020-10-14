#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c);

int main(void)
{
	printf("[case 1]\n");
	printf("	strrchr		:%s\n", strrchr(	"abcdabcd", 'c'));
	printf("	ft_strrchr	:%s\n", ft_strrchr(	"abcdabcd", 'c'));

	////////////////////////////////////////
	printf("[case 2]\n");
	printf("	strrchr		:%s\n", strrchr(	"abcdabcd", 'z'));
	printf("	ft_strrchr	:%s\n", ft_strrchr(	"abcdabcd", 'z'));

	////////////////////////////////////////
	printf("[case 3]\n");
	printf("	strrchr		:%s\n", strrchr(	"abcd\0abc\0d", '\0'));
	printf("	ft_strrchr	:%s\n", ft_strrchr(	"abcd\0abc\0d", '\0'));

	return (0);
}
