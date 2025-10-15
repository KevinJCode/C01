#include <unistd.h>

int	ipssi_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ipssi_recursive_power(nb, power - 1));
}
