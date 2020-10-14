#include <stdio.h>
#include "libft.h"

void	lst_content_free(void *a)
{
	free(a);
}

void	*to_upper(void *s)
{
	void *new;

	if (!(new = ft_strdup((const char *)s)))
		return (NULL);
	((char *)new)[0] += 'A' - 'a';
	((char *)new)[1] += 'A' - 'a';
	return (new);
}

int main(void)
{
	char *str1 = ft_strdup("ab");
	t_list *lst = ft_lstnew(str1);

	char *str2 = ft_strdup("cd");
	lst->next = ft_lstnew(str2);

	char *str3 = ft_strdup("ef");
	lst->next->next = ft_lstnew(str3);

	t_list *new = ft_lstmap(lst, to_upper, lst_content_free);
	printf("ft_lstmap(lst, to_upper, lst_content_free)\n");
	printf("	lst->content			:%s\n", new->content);
	printf("	lst->next->content		:%s\n", new->next->content);
	printf("	lst->next->next->content	:%s\n", new->next->next->content);

	ft_lstclear(&new, lst_content_free);
	ft_lstclear(&lst, lst_content_free);
	return (0);
}
