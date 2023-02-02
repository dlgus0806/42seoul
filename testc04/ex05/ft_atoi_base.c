/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:55:01 by i-kim             #+#    #+#             */
/*   Updated: 2023/02/02 13:15:24 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_baselen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	is_valid(char *base)
{
	int	i;
	int	j;

	if (ft_baselen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if ((base[i] == '+' || base[i] == '-' || base[i] == 32
				|| (base[i] >= 9 && base[i] <= 13)))
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

int	is_valid_str(char *str, int *minus)
{
	int	i;

	i = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			*minus *= -1;
		i++;
	}
	return (i);
}

int	indexnum(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int			i;
	int			minus;
	int			baselen;
	int			index;
	long long	answer;

	i = 0;
	answer = 0;
	baselen = ft_baselen(base);
	minus = 1;
	if (is_valid(base) == 1)
	{
		i = is_valid_str(str, &minus);
		while (str[i])
		{
			index = indexnum(str[i], base);
			if (index == -1)
				break ;
			answer = answer * baselen + index;
			i++;
		}
		return (minus * answer);
	}
	return (0);
}
