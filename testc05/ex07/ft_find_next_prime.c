/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:52:29 by i-kim             #+#    #+#             */
/*   Updated: 2023/02/02 19:15:38 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	while (i <= nb / i)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	while (nb > 3)
	{
		if (is_prime(nb + i) == 1)
			return (nb + i);
		i++;
	}
	return (2);
}

#include <stdio.h>

int	main()
{
	printf("%d", ft_find_next_prime(98));
}
