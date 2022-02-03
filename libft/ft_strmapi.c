/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eayasli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:20:24 by eayasli           #+#    #+#             */
/*   Updated: 2022/01/13 13:54:26 by eayasli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = -1;
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	while (str[++i])
		str[i] = (*f)(i, str[i]);
	return (str);
}
