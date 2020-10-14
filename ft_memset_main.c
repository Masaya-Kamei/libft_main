#include <stdio.h>
#include <string.h>

void	*ft_memset(void *buf, int ch, size_t n);

int main(void)
{
	char str1[] = "0123456789";
	char str2[] = "0123456789";
	void *rt1;
	void *rt2;

	rt1 = memset(str1 + 2, '*', 5);
	printf("memset		:%s,	return	:%s\n", str1, rt1);

	rt2 = ft_memset(str2 + 2, '*', 5);
	printf("ft_memset	:%s,	return	:%s\n", str2, rt2);

	return (0);
}
