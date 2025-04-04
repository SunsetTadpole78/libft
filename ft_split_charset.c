/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_charset.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 09:52:54 by lroussel          #+#    #+#             */
/*   Updated: 2025/04/04 10:03:40 by lroussel         ###   ########.fr       */
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

static char	*get_word(char const *s, int start, char *charset)
{
	int		end;

	end = start;
	while (s[end] && !ft_strchr(charset, s[end]))
		end++;
	return (ft_substr(s, start, end - start));
}

char	**ft_split_charset(char const *s, char *charset)
{
	char			**res;
	unsigned int	i;
	unsigned int	j;

	if (!charset)
		return (NULL);
	res = malloc(sizeof(char *) * (ft_count_words_charset(s, charset) + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen(s))
	{
		while (ft_strchr(charset, s[i]))
			i++;
		if (i < ft_strlen(s))
		{
			res[j] = get_word(s, i, charset);
			if (!res[j])
				return (free_all(res, j));
			i += ft_strlen(res[j++]) + 1;
		}
	}
	res[j] = 0;
	return (res);
}
