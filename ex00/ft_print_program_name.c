/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 10:45:39 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/26 10:46:46 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c)
{
    write(1,&c,1);
}

int	ft_print_program_name(int argc, char **argv)
{
	ft_putchar(*argv[0]);
	return (0);
}
