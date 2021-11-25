#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	arr1[] = "applewatch";
	char	arr2[] = "applewatch";

	memset(arr1, 'A', 5);
	ft_memset(arr2, 'A', 5);
	printf("%s\n",arr1);
	printf("%s\n",arr2);
}
