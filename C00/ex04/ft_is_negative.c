/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-jes <made-jes@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:11:19 by made-jes          #+#    #+#             */
/*   Updated: 2024/09/21 19:57:50 by made-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	{
		if (n >= 0)
		{
			write(1, "P", 1);
		}
		else
		{
			write(1, "N", 1);
		}
	}
}
/*int	main(void)
{
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(1);
	return (0);
}*/
