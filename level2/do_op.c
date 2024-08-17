/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 22:34:25 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/08/11 20:39:03 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av)
{
    if (ac== 4)
    {
        if (av[2][0] == '+')
            printf("%d", atoi(av[1]) + atoi(av[3]));
        else if (av[2][0] == '-')
            printf("%d", atoi(av[1]) - atoi(av[3]));
        else if (av[2][0] == '*')
            printf("%d", atoi(av[1]) * atoi(av[3]));
        else if (av[2][0] == '/')
            printf("%d", atoi(av[1]) / atoi(av[3]));
        else if (av[2][0] == '%')
            printf("%d", atoi(av[1]) % atoi(av[3]));
    }
    printf("\n");
    return (0);
}