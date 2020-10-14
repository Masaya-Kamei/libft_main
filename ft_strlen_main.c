#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s);

int main(void)
{
	printf("strlen		:%zu\n", strlen(	"abcdefgh"));
	printf("ft_strlen	:%zu\n", ft_strlen(	"abcdefgh"));

	return (0);
}
