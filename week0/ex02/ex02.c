#include <stdio.h>

extern void	jr_swap(int *a, int *b);

int	main(void)
{
	int a;
	int b;

	a = 0;
	b = 42;
	jr_swap(&a, &b);
	printf("%d" "%d", a, b);
	return (0);
}