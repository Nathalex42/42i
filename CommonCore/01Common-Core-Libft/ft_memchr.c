/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:50:13 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/07 17:00:56 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*initial_address;
	size_t				i;

	initial_address = (const unsigned char *)s;
	i = 0;
	while (i < n && initial_address[i] != (unsigned char)c)
		i++;
	if (i < n)
		return ((void *)&initial_address[i]);
	return (NULL);
}
