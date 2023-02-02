/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:15:02 by i-kim             #+#    #+#             */
/*   Updated: 2023/02/02 12:30:59 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
	{
		while (power > 1)
		{
			nb = nb * i;
			power--;
		}
		return (nb);
	}
}

#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_power(-2, 3));
}
