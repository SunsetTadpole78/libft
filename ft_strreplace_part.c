/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace_part.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 21:53:59 by lroussel          #+#    #+#             */
/*   Updated: 2025/04/04 21:56:22 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strreplace_part(char *src, int start, int replace_len,
		char *to_add)
{
	char	*dest;
	int		len;
	int		to_add_len;

	len = ft_strlen(src);
	to_add_len = ft_strlen(to_add);
	dest = malloc(sizeof(char) * (len - replace_len + to_add_len + 1));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, src, start);
	ft_memcpy(dest + start, to_add, to_add_len);
	ft_memcpy(dest + start + to_add_len, src + start + replace_len,
		len - (start + replace_len));
	dest[len - replace_len + to_add_len] = 0;
	return (dest);
}
