/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:50:08 by i-kim             #+#    #+#             */
/*   Updated: 2023/02/02 15:14:02 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int	ft_atoi(char *str);

int main()
{
	//ex03
	printf("< ex03 >\n");
	char str8[] = "123csdff45678abcabcabc";
	char str9[] = "  ";
	char str10[] = "        24jkjkgcmhfht srghxrsegtest -frye";
	char str11[] = "---123456";
	char str12[] = "00";
	char str13[] = "-2147483648";
	char str14[] = "213 432";
	char str15[] = "";
	printf("-----------answer------------\n");

	printf("%d\n", atoi(str8));
	printf("%d\n", atoi(str9));
	printf("%d\n", atoi(str10));
	printf("%d\n", atoi(str11));
	printf("%d\n", atoi(str12));
	printf("%d\n", atoi(str13));
	printf("%d\n", atoi(str14));
	printf("%d\n", atoi(str15));
	printf("-------------------------------\n\n");
	printf("-----------output------------\n");
	printf("%d\n", ft_atoi(str8));
	printf("%d\n", ft_atoi(str9));
	printf("%d\n", ft_atoi(str10));
	printf("%d\n", ft_atoi(str11));
	printf("%d\n", ft_atoi(str12));
	printf("%d\n", ft_atoi(str13));
	printf("%d\n", ft_atoi(str14));
	printf("%d\n", ft_atoi(str15));
	printf("-------------------------------\n");
}

