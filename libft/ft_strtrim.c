/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:56:29 by lmasetti          #+#    #+#             */
/*   Updated: 2022/10/11 12:56:31 by lmasetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_c_s(char const *s1, char const *set)
{
	size_t	i;
	size_t	res;
	size_t	x;

	i = 0;
	res = 0;
	x = 0;
	while (set[x])
	{
		if (s1[i] == set[x])
		{
			res++;
			x = 0;
			i++;
		}
		else
			x++;
	}
	return (res);
}

static size_t	count_c_e(char const *s1, char const *set)
{
	size_t	i;
	size_t	x;
	size_t	res;

	x = 0;
	i = ft_strlen(s1) - 1;
	res = ft_strlen(s1);
	while (set[x])
	{
		if (s1[i] == set[x])
		{
			res--;
			x = 0;
			i--;
		}
		else
			x++;
	}
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*newstr;
	size_t		i;
	size_t		last;
	size_t		first;

	i = 0;
	first = count_c_s(s1, set);
	last = count_c_e(s1, set);
	if (s1[first] == '\0')
	{
		first = 0;
		last = 0;
	}
	newstr = (char *) malloc(sizeof(char) * (last - first + 1));
	if (!newstr)
		return (NULL);
	while (first < last)
	{
		newstr[i] = s1[first];
		i++;
		first++;
	}
	newstr[i] = '\0';
	return (newstr);
}
