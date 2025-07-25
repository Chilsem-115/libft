/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itamsama <itamsama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:31:45 by itamsama          #+#    #+#             */
/*   Updated: 2024/10/26 17:07:10 by itamsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t b)
{
	unsigned char	*s;

	if (!str || b == 0)
		return ;
	s = (unsigned char *)str;
	while (b--)
		*s++ = '\0';
}
