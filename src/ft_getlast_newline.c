/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getlast_newline.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:03:29 by lroussel          #+#    #+#             */
/*   Updated: 2025/04/06 14:06:34 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_getlast_newline(char *value)
{
	char	*last;
	int		i;

	last = value;
	i = 0;
	while (value[i])
	{
		if (value[i] && value[i] == '\n')
			last = value + i + 1;
		i++;
	}
	return (last);
}
