#include <unistd.h>

void	print_bits(unsigned int octet)
{
	int i = 8;
	unsigned int bit;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

int main()
{
	print_bits(2);
	write(1, "\n", 1);
	print_bits(7);
	return (0);
}
