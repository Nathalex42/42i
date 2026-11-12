/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 21:07:11 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/07 17:01:22 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*address1;
	const unsigned char	*address2;
	size_t				i;

	i = 0;
	address1 = (const unsigned char *)s1;
	address2 = (const unsigned char *)s2;
	while (i < n && address1[i] == address2[i])
		i++;
	if (i == n)
		return (0);
	return (address1[i] - address2[i]);
}
