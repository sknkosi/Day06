/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 10:50:50 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/26 10:51:28 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_print_params(int argc, char **argv)
{
  int i;

  i=-1;
  while(++i<argc)
  {
	  ft_putchar(*argv[i]);
  }
	return (0);
}
