/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:35:47 by i-kim             #+#    #+#             */
/*   Updated: 2023/01/30 14:07:06 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);
int main()
{
	printf("\n");
	printf("---------------ex01--------------\n");
	printf("\n");

	char s13[10] = "awd";
	char s14[10] = "awd";
	char s15[10] = "awd";
	char s16[10] = "awd";
	unsigned int a = 2;
	printf("----------case1-------------\n");
	printf("input\n");
	printf("ft_strncmp : %d\n", ft_strncmp(s13, s14, a));
	printf("answer\n");
	printf("strncmp : %d\n", strncmp(s15, s16, a));

	char s17[10] = "ab";
	char s18[10] = "a";
	char s19[10] = "ab";
	char s20[10] = "a";
	unsigned int b = 2;
	printf("----------case2-------------\n");
	printf("input\n");
	printf("ft_strncmp : %d\n", ft_strncmp(s17, s18, b));
	printf("answer\n");
	printf("strncmp : %d\n", strncmp(s19, s20, b));


	char s21[10] = "Hello";
	char s22[10] = "Helloaa";
	char s23[10] = "Hello";
	char s24[10] = "Helloaa";
	unsigned int c = 7;
	printf("----------case3-------------\n");
	printf("input\n");
	printf("ft_strncmp: %d\n", ft_strncmp(s21, s22, c));
	printf("answer\n");
	printf("strncmp: %d\n", strncmp(s23, s24, c));


	char s25[10] = "Hello";
	char s26[11] = "jaeyoondog";
	char s27[10] = "Hello";
	char s28[11] = "jaeyoondog";
	unsigned int d = 6;
	printf("----------case4-------------\n");
	printf("input\n");
	printf("ft_strncmp: %d\n", ft_strncmp(s25, s26, d));
	printf("answer\n");
	printf("strncmp: %d\n", strncmp(s27, s28, d));


	char s29[10] = "Hello";
	char s30[11] = "jaeyoondog";
	char s31[10] = "Hello";
	char s32[11] = "jaeyoondog";
	unsigned int e = 0;
	printf("----------case5-------------\n");
	printf("input\n");
	printf("ft_strncmp: %d\n", ft_strncmp(s29, s30, e));
	printf("answer\n");
	printf("strncmp: %d\n", strncmp(s31, s32, e));

	char	our_5[10] = {'H', 'E', 'L', 'L', 'O'};
	char	our_6[10] = {'H', 'E', 'L', 200, 'O'};
	char	our_7[10] = {'H', 'E', 'L', 'L', 'O'};
	char	our_8[10] = {'H', 'E', 'L', 200, 'O'};
	unsigned int qwc = 4;
	printf("----------case4-------------\n");
	printf("input\n");
	printf("ft_strncmp: %u\n", ft_strncmp(our_5, our_6, qwc));
	printf("answer\n");
	printf("strncmp: %u\n", strncmp(our_7, our_8, qwc));
}
