
int	max(int *tab, unsigned int len)
{
	unsigned int i = 1;
	int max = tab[0];
	if (len == 0)
		return (0);
	while (i < len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}
#include <stdio.h>
int main()
{
	int tab[] = {1,9,5,7,14,0};
	printf("%d", max(tab, 6));
	return (0);
}
