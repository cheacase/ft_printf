/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayatsyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 12:11:04 by ayatsyny          #+#    #+#             */
/*   Updated: 2016/12/04 16:58:20 by ayatsyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char	const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	if (s1 || s2 || n)
		if (!ft_strncmp(s1, s2, n))
			return (1);
	return (0);
}
