/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:25:43 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/18 20:51:25 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while ((*lst)->next)
		lst = &(*lst)->next;
	(*lst)->next = new;
}

// int	main(void)
// {
// 	t_list		*begin;
// 	t_list		*a;
// 	t_list		*b;
// 	t_list		*c;
// 	char const	*a_cnt = "1st element";
// 	char const	*b_cnt = "2nd element";
// 	char const	*c_cnt = "3rd element";

// 	begin = NULL;
// 	a = ft_lstnew((void *)a_cnt);
// 	b = ft_lstnew((void *)b_cnt);
// 	c = ft_lstnew((void *)c_cnt);
// 	ft_lstadd_back(&begin, a);
// 	ft_lstadd_back(&begin, b);
// 	ft_lstadd_back(&begin, c);
// 	while (begin)
// 	{
// 		printf("%s\n", (char *)begin->content);
// 		begin = begin->next;
// 	}
// }
