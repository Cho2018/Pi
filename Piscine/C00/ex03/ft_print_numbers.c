/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:24:52 by hecho             #+#    #+#             */
/*   Updated: 2020/07/06 15:26:14 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_numbers(void)
{
	int num;

	num = '0';
	while (num <= '9')
	{
		write(1, &num, 1);
		num++;
	}
}

