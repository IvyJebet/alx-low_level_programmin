#include <stdlib.h>
#include <time.h>
/**
 * main - Determine whether a nrandom number is zero, positive or negative.
 *
 * Return: 0 on Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0 ) {
		printf("%d is %s\n", n, "negative"); }
	else if (n=0) {
		printf("%d is %s\n", n, "zero"); }
	else {
		printf("%d is %s\n", n, "positive"); }
	return (0);
}
