/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:09:06 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/08/23 12:51:47 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
    int n;
    if (start < end)
        n = end - start;
    else
        n = start - end;
    int *p;
    p = (int *)malloc(sizeof(int) * (n + 1));
    if (!p)
        return (NULL);
    int i = 0;
    while (i <= n)
    {
        if (start < end)
            p[i] = start++;
        else
            p[i] = start--;
        i++;
    }
    return (p);
}

int main(void)
{
    int *arr;
    int size;
    int i;

    // Test case 1: range (1, 3)
    arr = ft_range(1, 3);
    size = 3 - 1 + 1; // Expected size: 3
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    free(arr);

    // Test case 2: range (-1, 2)
    arr = ft_range(-1, 2);
    size = 2 - (-1) + 1; // Expected size: 4
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    free(arr);

    // Test case 3: range (0, 0)
    arr = ft_range(0, 0);
    size = 1; // Expected size: 1
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    free(arr);

    // Test case 4: range (0, -3)
    arr = ft_range(0, -3);
    size = 0 - (-3) + 1; // Expected size: 4
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    free(arr);

    return 0;
}