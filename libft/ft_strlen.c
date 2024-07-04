/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaenko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:32:01 by asaenko           #+#    #+#             */
/*   Updated: 2024/02/20 12:06:00 by asaenko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	len;
	char	*str_cpy;

	len = 0;
	str_cpy = (char *)str;
	while (str_cpy[len])
	{
		len++;
	}
	return (len);
}
