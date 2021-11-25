#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

int	main(void)
{
	char	arr1[] = "apple";
	char	arr2[] = "pie";
	char	str1[] = "apple";
	char	str2[] = "pie";
	int	n;
	int	m;

	n = ft_strlcat(arr1, arr2, 4);
	printf("%d\n", n);
	m = strlcat(str1, str2, 4);
	printf("%d\n", m);
}
