#include "libft.h"

unsigned int	ft_negative(int nb)
{
	if (nb < 0)
		return (nb * (-1));
	else
		return (nb);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int nb;

	if (n < 0)
		ft_putchar_fd('-', fd);
	nb = ft_negative(n);
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}
