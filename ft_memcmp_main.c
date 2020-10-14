#include <stdio.h>
#include <string.h>

int		ft_memcmp(const void *buf1, const void *buf2, size_t n);

int main(void)
{
	printf("[case 1]\n");
	printf("	memcmp		:%d\n", memcmp(		"abc\0de", "abc\0de", 6));
	printf("	ft_memcmp	:%d\n", ft_memcmp(	"abc\0de", "abc\0de", 6));

	//////////////////////////////////////////////////////////
	printf("[case 2]\n");
	printf("	memcmp		:%d\n", memcmp(		"\200", "128", 3));
	printf("	ft_memcmp	:%d\n", ft_memcmp(	"\200", "128", 3));

	//////////////////////////////////////////////////////////
	// 引数の渡し方でmemcmpの返り値が変わる
	// printf("CL(%d): %d\n", 5, memcmp("aiueo", "aiue1", 5));
	// printf("FT(%d): %d\n", 5, ft_memcmp("aiueo", "aiue1", 5));

	// int i = 5;
	// printf("CL(%d): %d\n", i, memcmp("aiueo", "aiue1", i));
	// printf("FT(%d): %d\n", i, ft_memcmp("aiueo", "aiue1", i));

	return (0);
}
