/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:27:46 by lroussel          #+#    #+#             */
/*   Updated: 2024/11/07 12:12:26 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_countwords(char const *s, char const *charset)
{
	unsigned int	i;
	unsigned int	count;

	if (!s || ft_strlen(s) == 0)
		return (0);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (!ft_strchr(charset, s[i]))
		{
			count++;
			while (!ft_strchr(charset, s[i]))
				i++;
		}
		else
			i++;
	}
	return (count);
}
