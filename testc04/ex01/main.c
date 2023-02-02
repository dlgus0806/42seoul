/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:45:17 by i-kim             #+#    #+#             */
/*   Updated: 2023/02/01 11:45:53 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str);

int main(void)
{
	char str4[10] = "abcabcabc";
	char str5[10] = "   ";
	char str6[40] = "24t srxt -frye";
	char str7[10] = "";
	printf("< ex01 >\n");
	printf("-----------answer------------\n");
	printf("%s\n", str4);
	printf("%s\n", str5);
	printf("%s\n", str6);
	printf("%s\n", str7);
	printf("-------------------------------\n\n");
	printf("-----------output------------\n");
	ft_putstr(str4);
	printf("\n");
	ft_putstr(str5);
	printf("\n");
	ft_putstr(str6);
	printf("\n");
	ft_putstr(str7);
	printf("\n");
	printf("-------------------------------\n");
}
