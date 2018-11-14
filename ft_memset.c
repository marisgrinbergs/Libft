/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magrinbe <magrinbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 20:36:45 by magrinbe          #+#    #+#             */
/*   Updated: 2018/11/14 17:24:59 by magrinbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	int		i;

	i = 0;
	str = s;
	while (n--)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
