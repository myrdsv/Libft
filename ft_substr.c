/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurduse <myurduse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:48:30 by myurduse          #+#    #+#             */
/*   Updated: 2023/05/21 18:48:31 by myurduse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	index;
	char			*yer;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	yer = (char *)malloc(sizeof(char) * (len + 1));
	if (yer == NULL)
		return (NULL);
	index = 0;
	while (s[i])
	{
		if (i >= start && index < len)
		{
			yer[index] = s[start];
			index++;
			start++;
		}
		i++;
	}
	yer[index] = '\0';
	return (yer);
}
