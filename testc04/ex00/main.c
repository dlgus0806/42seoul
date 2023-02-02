/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: i-kim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:44:13 by i-kim             #+#    #+#             */
/*   Updated: 2023/02/01 11:44:53 by i-kim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str);

int	main(void)
{
	//ex00
	char str[] = "asdfghjk";
	char str1[] = "    ";
	char str2[] = "";
	char str3[] = "\t\n";
	printf("< ex00 >\n");
	printf("-----------answer------------\n");
	printf("%lu\n", strlen(str));
	printf("%lu\n", strlen(str1));
	printf("%lu\n", strlen(str2));
	printf("%lu\n", strlen(str3));
	printf("-------------------------------\n\n");
	printf("-----------output------------\n");
	printf("%d\n", ft_strlen(str));
	printf("%d\n", ft_strlen(str1));
	printf("%d\n", ft_strlen(str2));
	printf("%d\n", ft_strlen(str3));
	printf("-------------------------------\n");

}
