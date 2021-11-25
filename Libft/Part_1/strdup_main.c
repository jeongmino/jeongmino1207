#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	arr[] = "apple";
	char	*tmp1;
	char	*tmp2;

	tmp1 = strdup(arr);
	tmp2 = ft_strdup(arr);

	printf("strdup : %s\n", tmp1);
	printf("ft_strdup : %s\n", tmp2);
	return (0);
}
