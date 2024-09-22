/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:17:50 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/08/23 12:50:43 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
    int n;
    n = end - start;
    if (n < 0)
        n *= -1;
    int *p;
    p = (int *)malloc(sizeof(int) * (n + 1));
    int i = 0;
    while (i <= n)
    {
        if (start < end)
        {
            p[i] = end--;
            i++;
        }
        else
        {
            p[i] = end++;
            i++;
        }
    }
    return (p);
}

int main(void)
{
    int *arr;
    int size;
    int i;

    // Test case 1: range (1, 3)
    arr = ft_rrange(1, 3);
    size = 3 - 1 + 1; // Expected size: 3
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    free(arr);

    // Test case 2: range (-1, 2)
    arr = ft_rrange(-1, 2);
    size = 2 - (-1) + 1; // Expected size: 4
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    free(arr);

    // Test case 3: range (0, 0)
    arr = ft_rrange(0, 0);
    size = 1; // Expected size: 1
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    free(arr);

    // Test case 4: range (0, -3)
    arr = ft_rrange(0, -3);
    size = 0 - (-3) + 1; // Expected size: 4
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    free(arr);

    return 0;
}