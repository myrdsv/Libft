/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myurduse <myurduse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:47:02 by myurduse          #+#    #+#             */
/*   Updated: 2023/05/21 18:47:04 by myurduse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *kelime, int s, size_t length)
{
	char	*ikinci_kelime;
	size_t	i;

	i = 0;
	ikinci_kelime = (char *)kelime;
	while (i < length)
	{
		ikinci_kelime[i] = s;
		i++;
	}
	return (ikinci_kelime);
}
