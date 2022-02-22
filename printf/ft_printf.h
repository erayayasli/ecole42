/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdogan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:08:34 by gdogan            #+#    #+#             */
/*   Updated: 2022/02/22 12:11:30 by eayasli          ###   ########.fr       */
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
int	printnbr(int n);
int	printunbr(unsigned int n);
int	printdecimal(unsigned int n, char c);
int	ft_printf(const char *str, ...);
int	organizer(char c, va_list arg);

#endif
