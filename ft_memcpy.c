/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkadiri <wkadiri@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 22:02:31 by wkadiri           #+#    #+#             */
/*   Updated: 2026/11/05 16:15:35 by wkadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*ptr;
	const char	*ptrr;
	size_t		i;

	ptr = (char *)dst;
	ptrr = (const char *)src;
	i = 0;
	while (i < n)
	{
		ptr[i] = ptrr[i];
		i++;
	}
	return (dst);
}
