/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:24:33 by lroussel          #+#    #+#             */
/*   Updated: 2024/11/06 12:13:37 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%s:%s\n", ft_strjoin("", ""), "");
	printf("%s:%s\n", ft_strjoin("abc", ""), "abc");
	printf("%s:%s\n", ft_strjoin("", "abc"), "abc");
	printf("%s:%s\n", ft_strjoin("abcd", "efghi"), "abcdefghi");
	return (0);
}
