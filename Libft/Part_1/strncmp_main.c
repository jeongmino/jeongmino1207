#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
	char	arr1[7] = "apple";
	char	arr2[8] = "appleaie";
	int		c;

	c = strncmp(arr1, arr2, 5);
	printf("strncmp : %d\n", c);
	
	c = ft_strncmp(arr1, arr2, 5);
	printf("ft_strncmp : %d\n", c);
}
