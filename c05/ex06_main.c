int ft_is_prime(int n);
int	main(void)
{
	int	number;
	int	results[2];
	int	count;

	number = 0;
	count = 0;
	while (number < 50000)
	{
		results[0] = is_prime(number);
		results[1] = ft_is_prime(number);
		printf("is_prime(%d) = %d  --  %d\n", number, results[1], results[0]);
		if (results[0] != results[1])
			return (1);
		number++;
		if (results[0])
			count++;
	}
	printf("is_prime(%d) = %d\n", INT_MAX, is_prime(INT_MAX));
	printf("first 50'000 number, %d prime\n", count);
	return (0);
}
