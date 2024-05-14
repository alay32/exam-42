#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 0 && nbr <= 9)
		ft_putchar(nbr + '0');
	else
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
}

int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if(n % 3 == 0 && n % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if(n % 3 == 0)
			write(1, "fizz\n", 5);
		else if (n % 5 == 0)
			write(1,"buzz\n", 5);
		else
		{
			ft_putnbr(n);
			write(1, "\n", 1);
		}
		n++;
	}
	return (0);
}
