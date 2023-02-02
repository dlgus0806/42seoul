/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:48:32 by i-kim             #+#    #+#             */
/*   Updated: 2023/02/01 11:50:32 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int nb);

int main()
{
	//ex02
	printf("< ex02 >\n");
	int case1 = -2147483648;
	int case2 = 2147483647;
	int case3 = 0;
	int	case4 = -324;
	printf("-----------answer------------\n");

	printf("%d\n", case1);
	printf("%d\n", case2);
	printf("%d\n", case3);
	printf("%d\n", case4);
	printf("-------------------------------\n\n");
	printf("-----------output------------\n");
	ft_putnbr(case1);
	printf("\n");
	ft_putnbr(case2);
	printf("\n");
	ft_putnbr(case3);
	printf("\n");
	ft_putnbr(case4);
	printf("\n");
	printf("-------------------------------\n");
}
