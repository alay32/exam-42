char *ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	char tmp;
	while (str[i])
		i++;
	i--;
	while (j < i)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		j++;
		i--;
	}
	return (str);
}/*
#include <stdio.h>
int main()
{
	char str[] = "hello world";
	printf("%s", ft_strrev(str));
	return (0);
}*/
