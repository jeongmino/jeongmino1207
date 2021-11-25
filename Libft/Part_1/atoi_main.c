#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str);

int	main(void)
{
	char	arr1[] = "\n\n\n\t  -0123adsd";
	char	arr2[] = "\n\n\n\n ++0123asd";
	char	arr3[] = "\n\n\n\n --02314";
	char	arr4[] = "\n\n\n\n +123";
	char	arr5[] = "\n\n\n   as123";
	char	arr6[] = "         0001";
	int		num;

	printf("atoi : %d\n", num = atoi(arr1));	
	printf("atoi : %d\n", num = atoi(arr2));	
	printf("atoi : %d\n", num = atoi(arr3));	
	printf("atoi : %d\n", num = atoi(arr4));	
	printf("atoi : %d\n", num = atoi(arr5));	
	printf("atoi : %d\n", num = atoi(arr6));	
	printf("ft_atoi : %d\n", num = atoi(arr1));	
	printf("ft_atoi : %d\n", num = atoi(arr2));	
	printf("ft_atoi : %d\n", num = atoi(arr3));	
	printf("ft_atoi : %d\n", num = atoi(arr4));	
	printf("ft_atoi : %d\n", num = atoi(arr5));	
	printf("ft_atoi : %d\n", num = atoi(arr6));	
	return (0);
}
