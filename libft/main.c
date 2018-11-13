/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtchou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 05:37:43 by chtchou           #+#    #+#             */
/*   Updated: 2018/11/09 13:46:50 by chtchou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int		main(int ac, char **argv)
{
	char	str[50];
	char	str2[50];
	char	buf[11];

	strcpy(str, "This is string.h library function");
	puts(str);
	memset(str, '$', 7);
	puts(str);
	strcpy(str2, "This is string.h library function");
	puts(str2);
	memset(str2, '$', 7);
	puts(str2);
	printf("%s\n", (char*)memchr("abcdef", 999, 6));
	printf("%s\n", (char*)ft_memchr("abcdef", 999, 6));
	printf("%d\n", memchr("abcdef", 999, 6) == ft_memchr("abcdef", 999, 6));
	bzero(buf, 11);
	strcpy(buf, "un deux 9");
	buf[9] = '6';
	printf("%s\n", buf);
	printf("%d\n", (strcmp(ft_strnstr(buf, "6", 10), "6") == 0));
	printf("%s. Normalement : %ld\n", ft_itoa(-2147483648), -2147483648);
	printf("%d", ft_atoi("-99999999999999999999999999"));
	printf("Atoi : %d", atoi("-99999999999999999999999999"));
	return (0);
}
