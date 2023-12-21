/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_prtf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:00:00 by bguillau          #+#    #+#             */
/*   Updated: 2022/12/23 16:00:45 by bguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	int	i;
	int	j;
	int	min_test;
	char	*str;
	char	*str2;

	str = malloc(12);
	str2 = NULL;
	i = ft_printf("salut %i %u %x %X %c %s%s %s %p %p %p %%\n", 0, 2147483647, 42, -420, 'c', "salut", str, str2, str, NULL, str2);
	ft_putnbr_fd(i, STD_OUT);
	printf("\n");
//	printf("Vrai fct :\n");
	j = printf("salut %i %u %x %X %c %s %s%s %p %p %p %%\n", 0, 2147483647, 42, -420, 'c', "salut", str, str2, str, NULL, str2);
	ft_putnbr_fd(j, STD_OUT);
	printf("\n");
	free(str);
	free(str2);
/* TEST INT MIN */
	printf("%d\n", INT_MIN); //works
//	printf("%d\n", -2147483648); cant compile
	min_test = INT_MIN;
	printf("%d\n", min_test); // works
	ft_printf("%d\n", min_test); // works


}

// para la compilacion (doesnt work without the -L.)
// gccw main_test_prtf.c -L. -lftprintf
// ou 
// gccw main_test_prtf.c libftprintf.a 

