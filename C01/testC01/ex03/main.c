#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main()
{
	int		x, y, z, w;
	int	   	*div, *mod;

	x = 13;
	y = 3;
	z = 0;
	w = 0;
	div = &z;
	mod = &w;

	ft_div_mod(x, y, div, mod);
	printf("%d %d\n", *div, *mod);
}
