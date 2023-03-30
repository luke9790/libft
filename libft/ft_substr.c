/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:56:37 by lmasetti          #+#    #+#             */
/*   Updated: 2022/10/11 12:56:39 by lmasetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	b;
	char	*substr;

	i = start;
	b = 0;
	if (start >= ft_strlen(s))
		len = 0;
	else if (ft_strlen(s) - start < len)
	{
		len = ft_strlen(s) - start;
	}
	substr = malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	while (b < len && s[i])
	{
		substr[b] = s[i];
		i++;
		b++;
	}
	substr[b] = '\0';
	return (substr);
}
