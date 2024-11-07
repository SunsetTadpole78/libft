/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:52:14 by lroussel          #+#    #+#             */
/*   Updated: 2024/11/07 16:15:40 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_count_digits(int n)
{
	unsigned int	count;
	
	if (n == -2147483648)
		return (10);
	if (n == 0)
		return (1);
	if (n < 0)
		n *= -1;
	count = 0;
	while (n / 10 != 0 || n % 10 != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}
