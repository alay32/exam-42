/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 23:21:56 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/08/22 15:48:30 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int ft_isdigit(int n)
{
    return (n >= '0' && n <= '9');
}

int ft_isalpha(int n)
{
    return ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'));
}

int    ft_tolower(int n)
{
    if (n >= 'A' && n <= 'Z')
        return (n + 'a' - 'A');
    return (n);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int result = 0;
    int sign = 1;
    int value;

    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    while (*str)
    {
        if (ft_isdigit(*str))
            value = *str - '0';
        else if (ft_isalpha(*str))
            value = ft_tolower(*str) - 'a' + 10;
        else
            break; 
        if (value >= str_base)
            break;
        result = result * str_base + value;
        str++;
    }
    return result * sign;
}


int main(void)
{
    // Test cases
    const char *test1 = "1a";         // Base 16, should return 26
    const char *test2 = "-1A";        // Base 16, should return -26
    const char *test3 = "101";        // Base 2, should return 5
    const char *test4 = "777";        // Base 8, should return 511
    const char *test5 = "123";        // Base 4, should return 27
    const char *test6 = "-1c2";       // Base 16, should return -450
    const char *test7 = "z";          // Base 36 (extended), should return 35
    const char *test8 = "ZZ";         // Base 36 (extended), should return 1295

    printf("Base 16: %s -> %d\n", test1, ft_atoi_base(test1, 16));
    printf("Base 16: %s -> %d\n", test2, ft_atoi_base(test2, 16));
    printf("Base 2: %s -> %d\n", test3, ft_atoi_base(test3, 2));
    printf("Base 8: %s -> %d\n", test4, ft_atoi_base(test4, 8));
    printf("Base 4: %s -> %d\n", test5, ft_atoi_base(test5, 4));
    printf("Base 16: %s -> %d\n", test6, ft_atoi_base(test6, 16));
    printf("Base 36: %s -> %d\n", test7, ft_atoi_base(test7, 36));
    printf("Base 36: %s -> %d\n", test8, ft_atoi_base(test8, 36));

    return 0;
}

