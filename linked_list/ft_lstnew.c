/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkadiri <wkadiri@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 23:53:00 by wkadiri           #+#    #+#             */
/*   Updated: 2026/10/27 00:15:53 by wkadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	if (!content)
		return (NULL);
	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

int main(void)
{
    t_list  *node;

    // Allocate the node
    node = ft_lstnew(NULL);
    
    // Print the address of the node to satisfy the compiler's "unused variable" rule
    printf("node address : %p\n", (void *)node);

    // Free the allocated memory to prevent leaks
    free(node);

    return (0);
}
