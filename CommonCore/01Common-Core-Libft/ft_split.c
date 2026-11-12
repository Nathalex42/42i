/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathalex <nathalex@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 17:27:50 by nathalex          #+#    #+#             */
/*   Updated: 2026/11/08 19:17:01 by nathalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	len;
	int	word;

	len = 0;
	word = 0;
	while (s[len] != '\0')
	{
		while (s[len] == c)
			len++;
		if (s[len] != '\0')
			word++;
		while (s[len] != c && s[len] != '\0')
			len++;
	}
	return (word);
}

static char	**ft_free_all(int word, char **tab)
{
	int	i;

	i = 0;
	while (i < word)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static char	**ft_fill(char **s2, char const *s, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (i > start)
		{
			s2[j] = ft_substr(s, start, i - start);
			if (s2[j] == NULL)
				return (ft_free_all(j, s2));
			j++;
		}
	}
	s2[j] = NULL;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	char	**s2;
	int		word;

	word = ft_count_word(s, c);
	s2 = malloc(sizeof(char *) * (word + 1));
	if (!s2)
		return (NULL);
	return (ft_fill(s2, s, c));
}
