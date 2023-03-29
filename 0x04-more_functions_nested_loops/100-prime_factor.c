#include <stdio.h>

/**
 * main - get the largest prime number
 *
 * Return: Always 0.
 */
int main(void)
{
	long prime = 612852475143;
	long maxPrime = 2;

	while (maxPrime <= prime)
	{
		if (prime % maxPrime == 0)
		{
			prime /= maxPrime;
		}
		else
			maxPrime++;
	}

	printf("%ld\n", maxPrime);

	return (0);
}
