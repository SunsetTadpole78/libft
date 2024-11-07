/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:59:09 by lroussel          #+#    #+#             */
/*   Updated: 2024/11/07 15:42:48 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char			**res;
	unsigned int	i;
	unsigned int	j;

	res = malloc(sizeof(char *) * (ft_countwords(s, &c) + 1));
	if (!res)
		return (0);
	i = 0;
	j = 0;
	while (i < ft_strlen(s))
	{
		while (ft_strchr(&c, s[i]))
			i++;
		if (i < ft_strlen(s))
		{
			res[j] = ft_get_first_word(s + i, &c);
			if (!res[j])
				return (0);
			i += ft_strlen(res[j]) + 1;
			j++;
		}
	}
	res[j] = 0;
	return (res);
}
