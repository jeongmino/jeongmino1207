#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		arr1[5] = {65,66,67,68,69};
	int		arr2[10];
	int		arr3[10];
/*	char	str1[] = "apple";
	char	str2[5];
	char	str3[5]; */
	int	n;
	memcpy(arr2, arr1, sizeof(int) * 5);
	ft_memcpy(arr3, arr1, sizeof(int) * 5);
	n = 0;
	while (n < 5)
	{
		printf("memcpy : %d\n", arr2[n]);
		printf("ft_memcpy : %d\n", arr3[n]);
		n++;
	}
}
