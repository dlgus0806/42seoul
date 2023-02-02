/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:38:40 by i-kim             #+#    #+#             */
/*   Updated: 2023/02/01 11:35:26 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	put_char(char c)
{
	write(1, &c, 1);
}

int	is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] != base[j])
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			cnt;
	long long	n;

	n = nbr;
	cnt = ft_strlen(base);
	if (is_valid(base) == 1)
	{
		if (n < 0)
		{
			put_char('-');
			n *= -1;
		}
		if (n >= cnt)
		{
			ft_putnbr_base((n / cnt), base);
			ft_putnbr_base((n % cnt), base);
		}
		else
			put_char(base[n]);
	}
}
