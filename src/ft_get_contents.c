/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_contents.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:45:10 by lroussel          #+#    #+#             */
/*   Updated: 2025/02/26 14:56:43 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_get_contents(int fd)
{
	char	*buffer;
	int		byte_read;
	int		pos;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	pos = 0;
	while (1)
	{
		byte_read = read(fd, buffer + pos, BUFFER_SIZE);
		if (byte_read == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[byte_read + pos] = '\0';
		if (byte_read == 0)
			break ;
		pos += byte_read;
		buffer = ft_realloc(buffer, pos + 1, pos + BUFFER_SIZE + 1);
		if (!buffer)
			return (NULL);
	}
	return (buffer);
}
