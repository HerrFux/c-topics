#include <stdio.h>

/* * * * * * * * * * * * * * *
 * ARGUMENT EVALUATION ORDER *
 * * * * * * * * * * * * * * */

int a(void)
{
	puts("a");
	return 1;
}

int b(void)
{
	puts("b");
	return 2;
}

int c(void)
{
	puts("c");
	return 3;
}

void empty(int a, int b, int c) {}

int main(void)
{
	empty(a(), b(), c());
	return 0;
}