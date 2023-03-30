/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:51:03 by lmasetti          #+#    #+#             */
/*   Updated: 2022/10/11 12:51:05 by lmasetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*now;
	t_list	*next;

	now = *lst;
	while (now)
	{
		next = now->next;
		ft_lstdelone(now, del);
		now = next;
	}
	*lst = NULL;
}
