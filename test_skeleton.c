#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_putnbr(int nb){
	if(nb < 0)
	{
		ft_putchar('-');
	}
	if(nb / 10 != 0)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
}




int main()
{
	

	return (0);
}