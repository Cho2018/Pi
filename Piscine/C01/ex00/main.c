/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 16:17:35 by hecho             #+#    #+#             */
/*   Updated: 2020/07/13 09:58:06 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr);

int main()
{
	int		a;
	char	arr[3];

	a = 1;
	arr[1] = ' ';
	arr[2] = '\n';

	ft_ft(&a);

	arr[0] = a / 10 + 48;
	write(1, arr, 1);
	arr[0] = a % 10 + 48;
	write(1, arr, 3);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
