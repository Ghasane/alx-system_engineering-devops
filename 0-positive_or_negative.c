#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0) puts("%d is positive", n);
	if (n<0) puts ("%d is negative", n);
	if (n=0) puts ("%d is zero", n);
	return (0);
}
