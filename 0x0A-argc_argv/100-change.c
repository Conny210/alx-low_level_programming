#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: count of arguments
 * @argv: array
 * Return: 0 (sucess) OR 1 (error)
 */

int main(int argc, char *argv[])
{
	int cents, coin_count, min_coins, i, current_coin;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coin_count = sizeof(coins) / sizeof(coins[0]);
	min_coins = 0;
	i = 0;

	while (cents > 0 && i < coin_count)
	{
		current_coin = coins[i];

		while (cents >= current_coin)
		{
			cents -= current_coin;
			min_coins++;
		}
		i++;
	}

	printf("%d\n", min_coins);
	return (0);
}

