/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 19:50:31 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/12 20:08:07 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long	nb;
	int		i;
	char	*str;
	int		j;

	j = 0;
	i = 1000000000;
	nb = n;
	str = malloc(sizeof(char) * 12);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[j++] = '-';
		nb = -nb;
	}
	while (i > 1 && nb / i == 0)
		i = i / 10;
	while (i > 0)
	{
		str[j++] = nb / i % 10 + '0';
		i = i / 10;
	}
	str[j] = '\0';
	return (str);
}
