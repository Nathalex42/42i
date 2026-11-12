/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 13:45:06 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/07 16:42:15 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*address_sequence;
	size_t			i;

	address_sequence = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		address_sequence[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
