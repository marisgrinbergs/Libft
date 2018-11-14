/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magrinbe <magrinbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 16:31:58 by magrinbe          #+#    #+#             */
/*   Updated: 2018/11/13 16:43:52 by magrinbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	while (s[i] != c)
		s--;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
