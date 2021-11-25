#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c);

int	main(void)
{
	char	str[] = "applewatch";
	char	*ptr;
	char	arr[] = "applewatch";
	char	*ptr2;

	ptr = strchr(str, 'p');
	ptr2 = ft_strchr(arr, 'p');
	if (ptr != NULL)
		printf("%c, %s\n", *ptr, ptr);
	if (ptr2 != NULL)
		printf("%c, %s\n", *ptr2, ptr2);
}
