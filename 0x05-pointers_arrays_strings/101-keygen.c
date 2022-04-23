#include <stdio.h>
#include <stdlib>
#include <time.h>

#define GRAPH_MIN 33
#define GRAPH_MAX 126

/**
 * main - generate valid password for 101-machine
 *
 * Return: always 0
 */
int main(void)
{
	int sum = 2772;
	char c;

	srand(time(NULL));

	while (sum > GRAPH_MAX)
	{
		c = rand() % (GRAPH_MAX - GRAPH_MIN) + GRAPH_MIN;

		sum -= c;

		if (sum < GRAPH_MIN)
		{
			c -= (GRAPH_MIN -sum);
			sum = GRAPH_MIN;
		}
		putchar(c);
	}
	putchar(sum);

	return (0);
}
