/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:24:33 by lroussel          #+#    #+#             */
/*   Updated: 2024/11/06 10:05:08 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%s", ft_strnstr("lorem ipsum dolor sit amet", "", 10));
	return (0);
}
