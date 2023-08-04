#include "main.h"

/**
 * main - Entry points
 * Description: Prints the minimum number of coins to make change
 * for an amount of money
 * @argc: Argument count
 * @argv: Argument values
 * Return: 1 if the argument passed to the main is not exactly one otherwise 0
 */
int main(int argc, char **argv)
{
	long unsigned int change, amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	change = get_coins(amount);
	printf("%lu\n", change);
	return (0);
}

/**
 * get_coins - Gets number of coins of given amount
 * @amount: Amount to be computed
 * Return: Number of coins
 */
long unsigned int get_coins(long unsigned int amount)
{
	long unsigned int quarters, dimes, nickels, pennies, coins;

	quarters = amount / 25;
	amount = amount - quarters * 25;
	dimes = amount / 10;
	amount = amount - dimes * 10;
	nickels = amount / 5;
	amount = amount - nickels * 5;
	pennies = (amount % 10) % 5;
	coins = quarters + dimes + nickels + pennies;

	return (coins);
}
