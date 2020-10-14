#include <stdio.h>
#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n);

int main(void)
{
	printf("[case 1]\n");
	printf("	strncmp		:%d\n", strncmp(	"abcdefgh", "abcdifgh", 6));
	printf("	ft_strncmp	:%d\n", ft_strncmp(	"abcdefgh", "abcdifgh", 6));

	///////////////////////////////////////////////
	printf("[case 2]\n");
	printf("	strncmp		:%d\n", strncmp(	"abcdefgh", "abcdifgh", 6));
	printf("	ft_strncmp	:%d\n", ft_strncmp(	"abcdefgh", "abcdifgh", 6));

	///////////////////////////////////////////////
	printf("[case 3]\n");
	printf("	strncmp		:%d\n", strncmp(	"abcdefgh", "zzzzzzzz", 0));
	printf("	ft_strncmp	:%d\n", ft_strncmp(	"abcdefgh", "zzzzzzzz", 0));

	//////////////////////////////////////////////
	printf("[case 4]\n");
	printf("	strncmp		:%d\n", strncmp(	"\200", "\0", 1));
	printf("	ft_strncmp	:%d\n", ft_strncmp(	"\200", "\0", 1));

	return (0);
}
