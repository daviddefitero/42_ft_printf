/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-fite <dde-fite@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:30:24 by dde-fite          #+#    #+#             */
/*   Updated: 2025/10/18 20:51:52 by dde-fite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*rsltlst;
	t_list	*_rslt;
	void	*cntnt_ptr;

	rsltlst = NULL;
	while (lst)
	{
		cntnt_ptr = f(lst->content);
		_rslt = ft_lstnew(cntnt_ptr);
		if (!_rslt)
		{
			del(cntnt_ptr);
			ft_lstclear(&rsltlst, del);
		}
		ft_lstadd_back(&rsltlst, _rslt);
		lst = lst->next;
	}
	return (rsltlst);
}
