/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:55:39 by i-kim             #+#    #+#             */
/*   Updated: 2023/02/02 15:10:56 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

int ft_atoi_base(char *str, char *base);

int main()
{
	//ex05
	printf("< ex05 >\n");
	char buf2[] = "0123456789abcdef";

	char str16[] = "cabc";
	char str17[] = "  ";
	char str18[] = "        24";
	char str19[] = "--123456";
	char str20[] = "00";
	char str21[] = "+5287";
	char str22[] = "213 432";
	char str23[] = "";
	char str24[] = "7f fffff";
	char str25[] = "-80000000";
	printf("-----------answer------------\n");
	printf("51900\n");
	printf("\n");
	printf("36\n");
	printf("1193046\n");
	printf("0\n");
	printf("21127\n");
	printf("531\n");
	printf("\n");
	printf("127\n");
	printf("-2147483648\n");
	printf("-------------------------------\n\n");
	printf("-----------output------------\n");
	printf("%d\n", ft_atoi_base(str16, buf2));
	printf("%d\n", ft_atoi_base(str17, buf2));
	printf("%d\n", ft_atoi_base(str18, buf2));
	printf("%d\n", ft_atoi_base(str19, buf2));
	printf("%d\n", ft_atoi_base(str20, buf2));
	printf("%d\n", ft_atoi_base(str21, buf2));
	printf("%d\n", ft_atoi_base(str22, buf2));
	printf("%d\n", ft_atoi_base(str23, buf2));
	printf("%d\n", ft_atoi_base(str24, buf2));
	printf("%d\n", ft_atoi_base(str25, buf2));
	printf("-------------------------------\n");

}
