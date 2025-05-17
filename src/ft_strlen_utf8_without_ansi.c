/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_utf8_without_ansi.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 19:15:25 by lroussel          #+#    #+#             */
/*   Updated: 2025/04/12 19:27:03 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_utf8_without_ansi(const char *s)
{
	size_t	i;
	size_t	len;
	size_t	j;

	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] == '\033' && s[i + 1] == '[')
		{
			i += 2;
			while (s[i] && (ft_isdigit(s[i]) || s[i] == ';'))
				i++;
			if (ft_isalpha(s[i]))
				i++;
		}
		else
		{
			j = ft_bytes_count(s[i]);
			i += j;
			len++;
		}
	}
	return (len);
}
