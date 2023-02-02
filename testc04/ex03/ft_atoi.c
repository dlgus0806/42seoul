/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:48:19 by i-kim             #+#    #+#             */
/*   Updated: 2023/02/01 11:37:17 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sign(int cnt)
{
	if (cnt % 2 == 1)
		return (-1);
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	cnt;
	int	answer;

	i = 0;
	cnt = 0;
	answer = 0;
	while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v')
		|| (str[i] == '\f') || (str[i] == '\r') || (str[i] == ' '))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			cnt++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		answer = answer * 10;
		answer = answer + str[i] - '0';
		i++;
	}
	return (sign(cnt) * answer);
}
