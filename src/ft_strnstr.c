/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:11:38 by lroussel          #+#    #+#             */
/*   Updated: 2024/11/05 17:54:04 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	llen;

	i = 0;
	j = 0;
	llen = ft_strlen(little);
	while (big[i] && i < llen)
	{
		if (big[i] == little[j])
			j++;
		else
			j = 0;
		if (j == len)
			return ((char *)(big - j));
		i++;
	}
	return (0);
}
