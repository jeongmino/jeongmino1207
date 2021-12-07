#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*buf;
	char	*needle;

	needle = NULL;
	buf = strnstr("applepie", needle, 7);
	printf("%s\n", buf);
	return (0);
}
