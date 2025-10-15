#include<unistd.h>


int	ipssi_iterative_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}

	if (nb == 0)
	{
		return(1);
	}

	int i = 1;
	int result = 1;

	while (i <= nb)
	{
		result = i * result;
		i++;
	}
	return(result);
}


void	ipssi_putchar(char c)
{
	write(1, &c, 1);
}

void	ipssi_putnbr(int nbr)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		ipssi_putchar('-');
	}
	if (nbr > 9)
	{
		ipssi_putnbr(nbr / 10);
	}
	ipssi_putchar(nbr % 10 + '0');
}
