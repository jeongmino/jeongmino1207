#include <ctype.h>
#include <unistd.h>

int	ft_tolower(int c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	A;

	A = 'A';
	A = tolower(A);
	ft_putchar(A);
	ft_putchar('\n');
	
	A = 'A';
	A = ft_tolower(A);
	ft_putchar(A);
	ft_putchar('\n');

	return (0);
}
