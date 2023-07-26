#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: A program that generates random valid passwords for the program
 * 101-crackme
 * Return: Always 0
 */
int main(void)
{
	int pid = getpid();

	srand(time(NULL) / pid);
	int pass;

	pass = rand() - RAND_MAX / 2;
	
	pass *= (pass < 0) ? -1: 1;

	printf("%d\n", pass);

	return (0);
}
