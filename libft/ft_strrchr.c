/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:56:17 by lmasetti          #+#    #+#             */
/*   Updated: 2022/10/11 12:56:19 by lmasetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = ft_strlen(s);
	str = (char *)s;
	if (c == 0)
		return (str + i);
	while (i >= 0)
	{
		if (str[i] == (unsigned char)c)
			return ((char *) s + i);
		i--;
	}
	return (NULL);
}
