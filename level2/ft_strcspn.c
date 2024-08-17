/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:46:51 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/08/16 16:58:08 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


size_t  ft_strcspn(const char *s, const char *reject)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s[i]) 
    {
        j = 0;
        while (reject[j])
        {
            if (s[i] == reject[j])
                return (i);
            j++;
        }
        i++;      
    }
    return (i);
}

int main()
{
    size_t dst;
    size_t src;
    dst = ft_strcspn("hello, world", "hello");
    src = strcspn("hello, world", "hello");
    printf("%zu\n", dst);
    printf("%zu", src);
    return (0);
}