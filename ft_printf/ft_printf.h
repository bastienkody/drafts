/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:09:54 by bguillau          #+#    #+#             */
/*   Updated: 2022/12/23 14:37:27 by bguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINT_H
# define STD_OUT 1
# define PTR_NULL "(nil)"
# define STR_NULL "(null)"

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

int		ft_printf(const char *str, ...);
int		print_char(va_list init);
int		print_str(va_list init);
int		print_ptr(va_list init);
int		print_deci(va_list init);
int		print_unsigned(va_list init);
int		ptr_hexa(uintptr_t nbr, int *len, char c);
int		print_hexa(va_list init, char xX);
void	ft_putunbr_fd(unsigned int n, int fd);

#endif
