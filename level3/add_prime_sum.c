/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 22:06:23 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/08/21 23:08:18 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int i = 0;
    int r = 0;
    int s = 1;
    
    while ((str[i] >= 9 && str[i] <= 13 ) || str[i] == 32)
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            s *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        r = r * 10 + str[i] - '0';
        i++;
    }
    return (s * r);
}

int is_prime(int nb)
{
    if (nb <= 1)
        return (0);
    else
    {
        int i = 2;
        while (i < nb)
        {
            if (nb % i == 0)
                return (0);
            i++;
        }
    }
    return (1);
}

void ft_putnbr(int nb)
{
    if (nb >= 0 && nb <= 9)
    {
        nb = nb + 48;
        write(1, &nb, 1);
    }
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}
int main(int ac, char **av)
{
    if (ac != 2 || ft_atoi(av[1]) < 0)
        write(1, "0", 1);
    else
    {
        int nb = ft_atoi(av[1]);
        int sum = 0;
        while (nb > 0)
        {
            if (is_prime(nb))
                sum += nb;
            nb--;
        }
        ft_putnbr(sum);
    }
    write(1, "\n", 1);
    return (0);
}