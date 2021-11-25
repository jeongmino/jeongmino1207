#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size);

int	main(void)
{
	char	*ptr1;
	char	*ptr2;
	int		cnt;
	int		len;

	cnt = 0;
	len = 10;

	ptr1 = calloc(len, sizeof(char));
	ptr2 = ft_calloc(len, sizeof(char));

	while (len--)
	{
		if (*ptr1 != 0)
		{
			printf("something wrong : %d\n", len);
			break;
		}
		cnt++;
	}
	if (cnt == 10)
		printf("cnt = %d\n", cnt);
	return (0);
}

