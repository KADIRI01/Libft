/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkadiri <wkadiri@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 00:15:47 by wkadiri           #+#    #+#             */
/*   Updated: 2026/10/24 20:53:25 by wkadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		len = 1;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nn;
	size_t	len;

	nn = n;
	len = get_len(nn);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nn < 0)
	{
		str[0] = '-';
		nn = -nn;
	}
	if (nn == 0)
		str[0] = '0';
	while (nn > 0)
	{
		str[--len] = (nn % 10) + '0';
		nn /= 10;
	}
	return (str);
}
