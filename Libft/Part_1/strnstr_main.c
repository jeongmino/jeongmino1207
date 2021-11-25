#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const void *haystack, const void *needle, size_t len);

int	main(void)
{	
	char	str[] = "applewatch";
	char	arr1[] = "watch";
	char	arr2[] = "wa";
	char	*buffer;

	buffer = strnstr(str, arr1, 7);
	if (buffer == NULL)
		printf("strnstr : NULL\n");
	buffer = strnstr(str, arr2, 7);
	if (buffer != NULL)
		printf("strnstr : %s\n", buffer);

	buffer = ft_strnstr(str, arr1, 7);
	if (buffer == NULL)
		printf("ft_strnstr : NULL\n");
	buffer = strnstr(str, arr2, 7);
	if (buffer != NULL)
		printf("ft_strnstr : %s\n", buffer);
	return (0);
}
