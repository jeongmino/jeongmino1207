#include <ctype.h>
#include <unistd.h>

int	ft_toupper(int c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	a;

	a = 'a';

	a = toupper(a);
	ft_putchar(a);
	ft_putchar('\n');
	
	a = 'a';

	a = ft_toupper(a);
	ft_putchar(a);

	return (0);
}	
