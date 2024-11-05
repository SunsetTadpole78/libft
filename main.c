/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:24:33 by lroussel          #+#    #+#             */
/*   Updated: 2024/11/05 18:06:37 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%s", ft_strnstr("uph rasene phrase de test", "phrase", 25));
	return (0);
}
