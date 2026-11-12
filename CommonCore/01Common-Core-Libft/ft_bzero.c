/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:32:52 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/07 17:00:37 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*set_to_zero;
	size_t			count;

	set_to_zero = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		set_to_zero[count] = '\0';
		count++;
	}
}
