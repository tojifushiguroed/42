/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00k.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:02:11 by egolboyu          #+#    #+#             */
/*   Updated: 2023/09/02 17:02:21 by egolboyu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y, int i, int j)
{
	if (x < 1 || y < 1)
		return ;
	i = 1;
	while (i <= y)
	{
		if (i == 1 || i == y)
			ft_putchar('o');
		else
			ft_putchar('|');
		j = 1;
		while (j <= x - 2)
		{
			if (i == 1 || i == y)
				ft_putchar('-');
			else
				ft_putchar(' ');
			j++;
		}
		if (i == 1 || i == y)
			ft_putchar('o');
		else
			ft_putchar('|');
		i++;
		ft_putchar('\n');
	}
}
