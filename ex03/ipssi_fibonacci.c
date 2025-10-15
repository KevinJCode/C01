#include <unistd.h>

int	ipssi_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	return (ipssi_fibonacci(index - 1) + ipssi_fibonacci(index - 2));
}
