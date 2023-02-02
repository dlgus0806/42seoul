/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 13:21:28 by i-kim             #+#    #+#             */
/*   Updated: 2023/01/30 20:15:49 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

char *ft_strstr(char *str, char *to_find);

int main(){

//ex04
	printf("\n");
	printf("---------------ex04--------------\n");
	printf("\n");

	char c1[30] = "my name is <jaeyojun>";
	char c2[10] = "jaeyojun";
	char c3[30] = "my name is <jaeyojun>";
	char c4[10] = "jaeyojun";

	printf("----------case1-------------\n");
	printf("input\n");
	printf("ft_strstr : %s\n", ft_strstr(c1, c2));
	printf("answer\n");
	printf("strstr : %s\n", strstr(c3, c4));


	char c5[30] = "fuck";
	char c6[10] = "de";
	char c7[30] = "fuck";
	char c8[10] = "de";

	printf("----------case2-------------\n");
	printf("input\n");
	printf("ft_strstr : %s\n", ft_strstr(c5, c6));
	printf("answer\n");
	printf("strstr : %s\n", strstr(c7, c8));


	char c9[30] = "we meet on the 25th of october";
	char c10[30] = "25";
	char c11[30] = "we meet on the 25th of october";
	char c12[30] = "25";


	printf("----------case3-------------\n");
	printf("input\n");
	printf("ft_strstr: %s\n", ft_strstr(c9, c10));
	printf("answer\n");
	printf("strstr: %s\n", strstr(c11, c12));


	char c13[40] = "I am Jaeyoon Jeong";
	char c14[40] = "Jae";
	char c15[40] = "I am Jaeyoon Jeong";
	char c16[40] = "Jae";

	printf("----------case4-------------\n");
	printf("input\n");
	printf("ft_strstr: %s\n", ft_strstr(c13, c14));
	printf("answer\n");
	printf("strstr: %s\n", strstr(c15, c16));

	//joogmoon 케이스 추가 ++
	char e1[30] = "abc";
	char e2[10] = "";
	char e3[30] = "abc";
	char e4[10] = "";

	printf("----------case5-------------(abc, )\n");
	printf("input\n");
	printf("ft_strstr : %s\n", ft_strstr(e1, e2));
	printf("answer\n");
	printf("strstr : %s\n", strstr(e3, e4));




	char e5[30] = "";
	char e6[10] = "abc";
	char e7[30] = "";
	char e8[10] = "abc";

	printf("----------case6---------------( , abc)\n");
	printf("input\n");
	printf("ft_strstr : %s\n", ft_strstr(e5, e6));
	printf("answer\n");
	printf("strstr : %s\n", strstr(e7, e8));


	char e9[30] = "abcad";
	char e10[10] = "ad";
	char e11[30] = "abcad";
	char e12[10] = "ad";

	printf("----------case7---------------(abcad, ad)\n");
	printf("input\n");
	printf("ft_strstr : %s\n", ft_strstr(e9, e10));
	printf("answer\n");
	printf("strstr : %s\n", strstr(e11, e12));


	char qw11[30] = "";
	char qw22[30] = "";
	printf("----------case8---------------\n");
	printf("input\n");
	printf("%s\n", ft_strstr(qw11, qw22));
	char qw33[30] = "";
	char qw44[30] = "";
	printf("answer\n");
	printf("%s\n", strstr(qw33, qw44));
}
