#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *buf, int c, size_t count);

int	main(void)
{
	char	arr[11] = "applewatch";
	int		ch = 't';
	char	*ptr;

	ptr = memchr(arr, ch, 7);
	if (ptr == NULL)
		printf("NULL\n");
	else
		printf("memchr : %s\n", ptr);
	
	ptr = memchr(arr, ch, 8);
	if (ptr == NULL)
		printf("NULL\n");
	else
		printf("memchr : %s\n", ptr);
	
	ptr = ft_memchr(arr, ch, 7);
	if (ptr == NULL)
		printf("ft_memchr : NULL\n");
	else
		printf("ft_memchr : %s\n", ptr);
	
	ptr = ft_memchr(arr, ch, 8);
	if (ptr == NULL)
		printf("NULL\n");
	else
		printf("ft_memchr : %s\n", ptr);
	
	return (0);
}
	
