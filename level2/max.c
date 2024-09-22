/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 22:51:23 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/08/17 23:25:59 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		max(int* tab, unsigned int len)
{
    int max;
    unsigned int i;

    max = tab[0];
    i = 1;
    if (!tab || len == 0)
        return (0);
    while (i < len)
    {
        if (max < tab[i])
            max = tab[i];
        i++;
    }
    return (max);
}

int main()
{
    int len = 5;
    int *t = malloc(len * sizeof(int));  

    if (t == NULL)  
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    t[0] = 1;
    t[1] = 5;
    t[2] = 6;
    t[3] = 7;
    t[4] = 9;

    printf("The maximum value is: %d\n", max(t, len));

    free(t);  
    return 0;
}