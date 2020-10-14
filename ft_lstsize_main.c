#include <stdio.h>
#include "libft.h"

int main(void)
{
	t_list *lst = ft_lstnew("abc");
	lst->next = ft_lstnew("def");
	lst->next->next = ft_lstnew("ghi");
	printf("ft_lstsize(lst)		:%d\n", ft_lstsize(lst));

	free(lst->next->next);
	free(lst->next);
	free(lst);
	return (0);
}
