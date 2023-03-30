/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:53:31 by lmasetti          #+#    #+#             */
/*   Updated: 2022/10/11 12:53:33 by lmasetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptrsrc;
	unsigned char	*ptrdest;

	ptrsrc = (unsigned char *)src;
	ptrdest = (unsigned char *)dest;
	i = 0;
	if (src == dest || n == 0)
		return (dest);
	if (ptrdest > ptrsrc)
	{
		while (n-- > 0)
			ptrdest[n] = ptrsrc[n];
	}
	else
	{
		while (i < n)
		{
			ptrdest[i] = ptrsrc[i];
			i++;
		}
	}
	return (dest);
}
