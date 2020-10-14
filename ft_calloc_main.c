#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size);

int main(void)
{
	printf("calloc:\n");
	int *nb1 = (int *)calloc(3, sizeof(int));
	for (int i = 0; i < 3; i++)
	{
		nb1[i] = i;
		printf("	nb1[%d] = %d\n", i, nb1[i]);
	}
	free(nb1);

	printf("ft_calloc:\n");
	int *nb2 = (int *)ft_calloc(3, sizeof(int));
	for (int i = 0; i < 3; i++)
	{
		nb2[i] = i;
		printf("	nb2[%d] = %d\n", i, nb2[i]);
	}
	free(nb2);

	// while (1){}
	return (0);
}
