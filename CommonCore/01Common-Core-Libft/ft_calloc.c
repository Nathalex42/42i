/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 16:52:17 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/07 16:54:27 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*res;
	size_t			taille;
	size_t			i;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	taille = nmemb * size;
	if (taille == 0)
		res = malloc(1);
	else
		res = malloc(taille);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < taille)
	{
		res[i] = 0;
		i++;
	}
	return (res);
}
