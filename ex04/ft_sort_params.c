/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 10:56:24 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/26 10:59:49 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int 	ft_strcmp(char *s1, char *s2)
{
    int i;

    i =  0;
    while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
        i++;
    return (s1[i] - s2[i]);
}
