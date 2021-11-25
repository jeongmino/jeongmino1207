#include <stdio.h>
#include <string.h>

#define SIZE 40

char	*ft_strrchr(const char *s, int c);

int	main(void)
{
	char	buf[SIZE] = "computer program";
	char	*ptr;
	int		ch = 'p';

	ptr = strrchr(buf, ch);
	printf("The last occurence of %c in %s is '%s'\n", ch, buf, ptr);
	ptr = ft_strrchr(buf, ch);
	printf("The last occurence of %c in %s is '%s'\n", ch, buf, ptr);
	return (0);
}
