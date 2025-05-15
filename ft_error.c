/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:56:14 by lroussel          #+#    #+#             */
/*   Updated: 2025/05/15 10:27:40 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_error(char *message, char *prefix, int code)
{
	if (message)
	{
		write(2, prefix, ft_strlen(prefix));
		write(2, message, ft_strlen(message));
		write(2, "\033[0m", 4);
	}
	return (code);
}
