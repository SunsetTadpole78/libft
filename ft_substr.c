/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:30:30 by lroussel          #+#    #+#             */
/*   Updated: 2024/11/06 12:05:07 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	size;
	char	*res;
	size_t	i;

	slen = ft_strlen(s);
	size = len + 1;
	if (len > slen - (start + 1))
		size = slen - start;
	res = malloc(sizeof(char) * size);
	if (!res)
		return (0);
	i = start;
	while ((i - start) < len || !s[i])
	{
		res[i - start] = s[i];
		i++;
	}
	res[i - start] = '\0';
	return (res);
}
