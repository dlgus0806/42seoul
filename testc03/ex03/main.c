/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:06:24 by i-kim             #+#    #+#             */
/*   Updated: 2023/01/30 14:11:14 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{

	//ex03
	printf("\n");
	printf("---------------ex03--------------\n");
	printf("\n");

	char b1[30] = "awd";
	char b2[10] = "awd";
	char b3[30] = "awd";
	char b4[10] = "awd";
	unsigned int f = 10;
	printf("----------case1-------------\n");
	printf("input\n");
	printf("ft_strncat : %s\n", ft_strncat(b1, b2, f));
	printf("answer\n");
	printf("strncat : %s\n", strncat(b3, b4, f));


	char b5[30] = "aa";
	char b6[10] = "c";
	char b7[30] = "aa";
	char b8[10] = "c";
	unsigned int g = 1;

	printf("----------case2-------------\n");
	printf("input\n");
	printf("ft_strncat : %s\n", ft_strncat(b5, b6, g));
	printf("answer\n");
	printf("strncat : %s\n", strncat(b7, b8, g));


	char b9[30] = "Hello";
	char b10[30] = "Helloaa";
	char b11[30] = "Hello";
	char b12[30] = "Helloaa";
	unsigned int h = 5;

	printf("----------case3-------------\n");
	printf("input\n");
	printf("ft_strncat: %s\n", ft_strncat(b9, b10,h));
	printf("answer\n");
	printf("strncat: %s\n", strncat(b11, b12, h));


	char b13[40] = "Hello";
	char b14[40] = "jaeyoondog";
	char b15[40] = "Hello";
	char b16[40] = "jaeyoondog";
		unsigned int i = 7;

	printf("----------case4-------------\n");
	printf("input\n");
	printf("ft_strncat: %s\n", ft_strncat(b13, b14, i));
	printf("answer\n");
	printf("strncat: %s\n", strncat(b15, b16, i));

	char b17[30] = "awd";
	char b18[10] = "awd";
	char b19[30] = "awd";
	char b20[10] = "awd";
	unsigned int k = 0;
	printf("----------case5-------------\n");
	printf("input\n");
	printf("ft_strncat : %s\n", ft_strncat(b17, b18, k));
	printf("answer\n");
	printf("strncat : %s\n", strncat(b19, b20, k));
}
