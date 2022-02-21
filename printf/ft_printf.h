/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:08:34 by gdogan            #+#    #+#             */
/*   Updated: 2022/02/21 15:27:06 by eayasli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	printchar(char c);
int	printstr(const char *str);
int	printpercent(void);
int	printpointer(unsigned long int n);
int	printnbr(long n);
int	printdecimal(unsigned int n, char c);
int	ft_printf(const char *str, ...);
int	organizer(char c, va_list arg);

#endif
