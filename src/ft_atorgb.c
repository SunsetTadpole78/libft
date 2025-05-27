/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atorgb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:47:20 by lroussel          #+#    #+#             */
/*   Updated: 2025/05/27 21:03:56 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_rgb	invalid_rgb(char **splited)
{
	t_rgb	rgb;

	ft_free_str_array(splited);
	rgb.r = -1;
	rgb.g = -1;
	rgb.b = -1;
	return (rgb);
}

static int	parse_cvalue(char *s)
{
	int	i;
	int	offset;
	int	res;

	i = 0;
	offset = 0;
	res = 0;
	while (s[i + offset] == '0')
		offset++;
	i += offset;
	while (s[i] >= '0' && s[i] <= '9' && (i - offset) < 3)
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	if (s[i] || res > 255)
		return (-1);
	return (res);
}

t_rgb	ft_atorgb(char *s)
{
	char	**splited;
	t_rgb	rgb;

	if (s[ft_strlen(s) - 1] == ',')
		return (invalid_rgb(NULL));
	splited = ft_split(s, ',');
	if (!splited[0] || !splited[1] || !splited[2] || splited[3])
		return (invalid_rgb(splited));
	rgb.r = parse_cvalue(splited[0]);
	if (rgb.r == -1)
		return (invalid_rgb(splited));
	rgb.g = parse_cvalue(splited[1]);
	if (rgb.g == -1)
		return (invalid_rgb(splited));
	rgb.b = parse_cvalue(splited[2]);
	if (rgb.b == -1)
		return (invalid_rgb(splited));
	ft_free_str_array(splited);
	return (rgb);
}
