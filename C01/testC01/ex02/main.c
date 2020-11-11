#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int		x;
	int		y;
	int		*a;
	int		*b;

	x = 42;
	y = 24;
	a = &x;
	b = &y;

	ft_swap(&x, &y);
	printf("%d %d\n", x, y);
}
