#include <stdio.h>
#include "libft.h"

int main(void)
{
	t_list	*lst1 = ft_lstnew("ab");
	lst1->next = ft_lstnew("cd");
	lst1->next->next = ft_lstnew("ef");

	printf("ft_lstlast(lst1)->content	:%s\n", ft_lstlast(lst1)->content);
	printf("ft_lstlast(lst1)->next		:%p\n", ft_lstlast(lst1)->next);

	free(lst1->next->next);
	free(lst1->next);
	free(lst1);

	//////////////////////////////////////////////////////
	t_list *lst2 = NULL;
	printf("\nft_lstlast(lst2)		:%p\n", ft_lstlast(lst2));

	return (0);
}
