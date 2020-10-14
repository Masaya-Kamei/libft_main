#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n);

int main(void)
{
	printf("[case 1]\n");
	char src1[] = "abc\0defgh";
	char dst1[] = "0123456789";
	char dst2[] = "0123456789";
	void *rt1;
	void *rt2;

	rt1 = memmove(dst1, src1, 5);
	printf("	memmove		:");
	for (int i = 0; i < 10; i++)
		printf("%c", dst1[i]);
	printf(",	return	:");
	for (int i = 0; i < 10; i++)
		printf("%c", ((char *)rt1)[i]);
	printf("\n");

	rt2 = ft_memmove(dst2, src1, 5);
	printf("	ft_memmove	:");
	for (int i = 0; i < 10; i++)
		printf("%c", dst2[i]);
	printf(",	return	:");
	for (int i = 0; i < 10; i++)
		printf("%c", ((char *)rt2)[i]);
	printf("\n");

	//////////////////////////////////////////////////
	printf("[case 2]\n");
	char str1[] = "abcdefgh";
	char str2[] = "abcdefgh";
	void *rt3;
	void *rt4;

	rt3 = memmove(str1 + 2, str1, 5);
	printf("	memmove		:%s,	return	:%s\n", str1, rt3);

	rt4 = ft_memmove(str2 + 2, str2, 5);
	printf("	ft_memmove	:%s,	return	:%s\n", str2, rt4);

	///////////////////////////////////////////////////
	printf("[case 3]\n");
	printf("	memmove		:%s\n", memmove(NULL, NULL, 5));
	printf("	ft_memmove	:%s\n", ft_memmove(NULL, NULL, 5));

	return (0);
}
