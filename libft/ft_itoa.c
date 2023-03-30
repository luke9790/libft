/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:50:15 by lmasetti          #+#    #+#             */
/*   Updated: 2022/10/11 12:50:18 by lmasetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_nbrlen(long int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static int	ft_potenza(int n)
{
	int	res;

	res = 1;
	while (n > 0)
	{
		res *= 10;
		n--;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	int		a;
	int		x;
	int		q;
	char	*ret;

	a = ft_nbrlen(n);
	x = 0;
	ret = malloc(sizeof(char) * (a + 1));
	if (!ret)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		ret[x++] = 45;
	}
	while (a > x)
	{
		q = (n / (ft_potenza(((a - x) - 1))) % 10);
		if (q < 0)
			q *= -1;
		ret[x++] = q + 48;
	}
	ret[x] = '\0';
	return (ret);
}
