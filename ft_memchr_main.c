#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *buf, int ch, size_t n);

int main(void)
{
	printf("[case 1]\n");
	printf("	memchr		:%s\n", memchr(		"abc\0defgh", 'f', 9));
	printf("	ft_memchr	:%s\n", ft_memchr(	"abc\0defgh", 'f', 9));

	////////////////////////////////////////////
	printf("[case 2]\n");
	printf("	memchr		:%s\n", memchr(		"abc\0defgh", 'z', 9));
	printf("	ft_memchr	:%s\n", ft_memchr(	"abc\0defgh", 'z', 9));

	return (0);
}
