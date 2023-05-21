/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurduse <myurduse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:46:53 by myurduse          #+#    #+#             */
/*   Updated: 2023/05/21 18:46:55 by myurduse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*str1;
	const unsigned char	*str2;

	if (!dest && !src)
		return (0);
	str1 = dest;
	str2 = src;
	while (n-- > 0)
	{
		*str1++ = *str2++;
	}
	return (dest);
}
