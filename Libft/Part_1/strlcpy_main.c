#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

int	main(void)
{
	char	arr1[] = "apple";
	char	arr2[] = "banana";
	char	str1[] = "apple";
	char	str2[] = "banana";

	printf("strlcpy : %lu\n", strlcpy(arr1,arr2,3));
	printf("ft_strlcpy : %zu\n", ft_strlcpy(str1,str2,3));
}

