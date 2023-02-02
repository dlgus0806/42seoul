/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 13:23:15 by i-kim             #+#    #+#             */
/*   Updated: 2023/01/31 11:36:28 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <unistd.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{

	char str3[400000] = "BlockDMask";
    char str4[7] = "Hell";
	printf("----------case1-------------\n");
	printf("intput\n");
    printf("ft_strlcat count: %u\n", ft_strlcat(str3, str4, 100000));
	printf("dest :%s\n", str3);

	printf("------------------------\n");
	char dest[400000] = "BlockDMask";
    char src[7] = "Hell";

	printf("ouput\n");
    printf("strlcat count: %lu\n", strlcat(dest, src, 100000));
	printf("dest :%s\n", dest);
	printf("\n");
	printf("----------case2-------------\n");
	char qw1[40] = "Bloae";
    char ee1[7] = "Hell";

	printf("iutput\n");
    printf("ft_strlcat count: %u\n", ft_strlcat(qw1, ee1, 2));
	printf("dest :%s\n", qw1);
	printf("------------------------\n");
	char qw[40] = "Bloae";
    char ee[7] = "Hell";

	printf("output\n");
    printf("strlcat count: %lu\n", strlcat(qw, ee, 2));
	printf("dest :%s\n", qw);

	printf("----------case3-------------\n");
	char qw12[40] = "Bloae";
    char ee12[7] = "Hell";

	printf("iutput\n");
    printf("ft_strlcat count: %u\n", ft_strlcat(qw12, ee12, 10));
	printf("dest :%s\n", qw12);
	printf("------------------------\n");
	char qw3[40] = "Bloae";
    char ee3[7] = "Hell";

	printf("output\n");
    printf("strlcat count: %lu\n", strlcat(qw3, ee3, 10));
	printf("dest :%s", qw3);

}
