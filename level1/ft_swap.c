/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 22:39:37 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/08/09 22:44:49 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
    int c;
    
    c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a = 9;
    int b = 5;
    printf("les valeurs avant le swap: a = %d et b = %d\n", a, b);
    ft_swap(&a, &b);
    printf("les valeus apres swap : a = %d et b = %d\n", a, b);
    return (0);
}