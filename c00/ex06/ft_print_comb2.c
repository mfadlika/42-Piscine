/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadlika <mfadlika@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:56:06 by mfadlika          #+#    #+#             */
/*   Updated: 2022/05/24 12:41:03 by mfadlika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_if(int a, int b, int c, int d)
{
	if (a * 10 + b < c * 10 + d)
	{	
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		if (a == '9' && b == '8')
		{
			write(1, "", 1);
		}
		else
		{	
			write(1, ",", 1);
			write(1, " ", 1);
		}
	}
}

void	ft_function(int a, int b, int c, int d)
{
	while (a <= '9')
	{	
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					ft_if (a, b, c, d);
					++d;
				}
				d = '0';
				++c;
			}
			c = '0';
			++b;
		}
		b = '0';
		++a;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	ft_function (a, b, c, d);
}
