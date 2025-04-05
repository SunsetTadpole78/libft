/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_raw.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 15:38:48 by lroussel          #+#    #+#             */
/*   Updated: 2025/04/05 17:27:16 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_all(char **splited, unsigned int max)
{
	unsigned int	i;

	i = 0;
	while (i < max)
	{
		free(splited[i]);
		i++;
	}
	free(splited);
	return (NULL);
}

static char	*get_word(char const *s, int start, char c)
{
	int		end;
	int		beginning;

	end = start;
	beginning = 1;
	while (s[end] && (beginning || s[end] != c))
	{
		if (beginning)
			beginning = s[end] == c;
		end++;
	}
	return (ft_substr(s, start, end - start));
}

static int	count_words_raw(char const *s, char c)
{
	int	count;

	count = ft_count_words(s, c);
	if (count == 0)
		return (s[0] != '\0');
	return (count + (s[ft_strlen(s) - 1] == c));
}

char	**ft_split_raw(char const *s, char c)
{
	char			**res;
	unsigned int	i;
	unsigned int	j;

	res = malloc(sizeof(char *) * (count_words_raw(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen(s))
	{
		if (i < ft_strlen(s))
		{
			res[j] = get_word(s, i, c);
			if (!res[j])
				return (free_all(res, j));
			i += ft_strlen(res[j]);
			j++;
		}
	}
	res[j] = 0;
	return (res);
}
