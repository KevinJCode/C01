#include<unistd.h>


int	ipssi_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}

	if (nb == 0)
	{
		return(1);
	}
	return nb * ipssi_recursive_factorial(nb - 1);
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

int main(void)
{
    int result = ipssi_recursive_factorial(12);
    ipssi_putnbr(result);
    ipssi_putchar('\n');
    return 0;
}
