#include <stdio.h>
#include "libft.h"

int main(void)
{
	t_list *lst = ft_lstnew("abc");
	printf("lst -> content	:%s\n", lst -> content);
	printf("lst -> next	:%p\n", lst -> next);

	free(lst);
	return (0);
}
