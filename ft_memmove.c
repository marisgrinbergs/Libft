/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magrinbe <magrinbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:40:14 by magrinbe          #+#    #+#             */
/*   Updated: 2018/11/16 21:47:10 by magrinbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;
	char	tmp;

	i = 0;
	d = dest;
	s = (char *)src;
	while (i < n)
	{
		s[i] = tmp;
		tmp = d[i];
		i++;
	}
	return (d);
}
