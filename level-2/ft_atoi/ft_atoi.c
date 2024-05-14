
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int i;
	int r;
	int sign;

	i = 0;
	r = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] -'0';
		i++;
		}
	return (r * sign);
}
/*
int main()
{
	printf("%d\n", ft_atoi("   		-124d"));
	printf("%d\n", atoi("    	-124d"));
	return (0);
}*/
