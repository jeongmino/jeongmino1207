#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char	arr1[] = "applewatch";
	char	arr2[] = "applewatch";
	int	arr3[5] = {1,2,3,4,5};
	int	arr4[5] = {1,2,3,4,5};
	int	n;

	bzero(arr2,5);
	ft_bzero(arr4, 5);
	n = 5;
	while (n--)
	{
		if ( arr2[n - 1] == '\0')
			puts("you did well");
		else
			printf("%d\n",n);
	}
}
