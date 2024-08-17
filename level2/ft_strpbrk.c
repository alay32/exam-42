/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:53:43 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/08/12 17:28:45 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s1[i])
    {
        j = 0;
        while (s2[j])
        {
            if (s2[j] == s1[i])
                return ((char *)(s1 + i));     
            j++;
        }
        i++;
    }
    return (NULL);
}

int main()
{
    const char *s1 = "hello world";
    const char *s2 = "od";
    char *result;
    char *dst;

    dst = strpbrk(s1, s2);
    result = ft_strpbrk(s1, s2);
    if (result)
        printf("First matching character: '%c'\n", *result);
    else
        printf("No matching characters found.\n");
    printf("\n%s\n", result);
    printf("%s", dst);
    return 0;
}