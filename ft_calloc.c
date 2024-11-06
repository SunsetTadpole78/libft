/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:12:30 by lroussel          #+#    #+#             */
/*   Updated: 2024/11/06 14:16:46 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	if (nmemb != 0 && size != 0)
	{
		res = malloc(nmemb * size);
		if (!res)
			return (0);
		ft_bzero(res, nmemb);
		return (res);
	}
	res = malloc(0);
	if (!res)
		return (0);
	return (res);
}
