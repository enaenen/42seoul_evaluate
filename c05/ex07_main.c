int ft_find_nex_prime(int);
int	main(void)
{
	int	index;

	index = -2;
	while (index < 100)
	{
		printf("find_next_prime(%d) = %d\n", index, ft_find_next_prime(index));
		index++;
	}
	printf("find_next_prime(%d) = %d\n", INT_MAX, ft_find_next_prime(INT_MAX));
}
