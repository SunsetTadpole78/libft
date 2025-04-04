/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words_charset.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 09:57:39 by lroussel          #+#    #+#             */
/*   Updated: 2025/04/04 10:02:31 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_count_words_charset(char const *s, char *charset)
{
	unsigned int	count;
	int				in_word;
	int				is_in_charset;

	if (!charset)
		return (0);
	count = 0;
	in_word = 0;
	while (*s)
	{
		is_in_charset = ft_strchr(charset, *s) != NULL;
		if (!is_in_charset && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (is_in_charset)
			in_word = 0;
		s++;
	}
	return (count);
}
