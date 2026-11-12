/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 21:25:53 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/07 17:01:48 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*address_target;
	const unsigned char	*address_sequence;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	address_target = (unsigned char *)dest;
	address_sequence = (const unsigned char *)src;
	if (address_target > address_sequence)
	{
		while (n > 0)
		{
			n--;
			address_target[n] = address_sequence[n];
		}
		return (dest);
	}
	i = 0;
	while (i < n)
	{
		address_target[i] = address_sequence[i];
		i++;
	}
	return (dest);
}
