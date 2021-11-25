int	main(void)
{
	char	arr1[6] = "abcdef";
	char	arr2[6] = "abcdef";
	char	*ft_ptr = NULL;
	char	*ptr = NULL;

	ft_ptr = ft_memmove(arr1 + 2, arr1, 1);
	ptr = memmove(arr2 + 2, arr2, 1);

	printf("ft_memmove : %s\n", ft_ptr);
	printf("memmove : %s\n", ptr);
	return (0);
}
