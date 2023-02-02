/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:39:17 by i-kim             #+#    #+#             */
/*   Updated: 2023/02/02 15:08:35 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int main(void)
{
	printf("< ex04 >\n");
	char buf[] = "0123456789abcdef";
	printf("-----------answer------------\n");

	printf("-%lx\n", 2147483648);
	printf("%x\n", 1111);
	printf("-%x\n", 345);
	printf("%x\n", -00);
	printf("%x\n", 0);
	printf("-------------------------------\n\n");
	printf("-----------output------------\n");
	ft_putnbr_base(-2147483648, buf);
	printf("\n");
	ft_putnbr_base(16, buf);
	printf("\n");
	ft_putnbr_base(-345, buf);
	printf("\n");
	ft_putnbr_base(-00, buf);
	printf("\n");
	ft_putnbr_base(0, buf);
	printf("\n");
	printf("-------------------------------\n");

}
