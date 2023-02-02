/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:33:40 by i-kim             #+#    #+#             */
/*   Updated: 2023/01/25 18:14:30 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);
int main()
{
	printf("---------------ex00--------------\n");
	printf("\n");
	char s1[10] = "awd";
	char s2[10] = "awd";
	char s3[10] = "awd";
	char s4[10] = "awd";

	printf("----------case1-------------\n");
	printf("input\n");
	printf("ft_strcmp : %d\n", ft_strcmp(s1, s2));
	printf("answer\n");
	printf("strcmp : %d\n", strcmp(s3, s4));

	char s5[10] = "aa";
	char s6[10] = "c";
	char s7[10] = "aa";
	char s8[10] = "c";
	printf("----------case2-------------\n");
	printf("input\n");
	printf("ft_strcmp : %d\n", ft_strcmp(s5, s6));
	printf("answer\n");
	printf("strcmp : %d\n", strcmp(s7, s8));


	char s9[10] = "cc";
	char s10[10] = "a";
	char s11[10] = "cc";
	char s12[10] = "a";
	printf("----------case3-------------\n");
	printf("input\n");
	printf("ft_strcmp: %d\n", ft_strcmp(s9, s10));
	printf("answer\n");
	printf("strcmp: %d\n", strcmp(s11, s12));

	char	our_1[10] = {'H', 'E', 'L', 'L', 'O'};
	char	our_2[10] = {'H', 'E', 'L', 150, 'O'};
	char	our_3[10] = {'H', 'E', 'L', 'L', 'O'};
	char	our_4[10] = {'H', 'E', 'L', 150, 'O'};
	printf("----------case4-------------\n");
	printf("input\n");
	printf("ft_strcmp: %d\n", ft_strcmp(our_1, our_2));
	printf("answer\n");
	printf("strcmp: %d\n", strcmp(our_3, our_4));
}
