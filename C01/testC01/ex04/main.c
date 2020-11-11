#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int		x, y;
	int		*a, *b;

	x = 13;
	y = 3;
	a = &x;
	b = &y;

	printf("Valor de a=%d e b= %d\n", *a, *b);
	printf("Executando funcao...\n");
	ft_ultimate_div_mod(a, b);
		printf("Valor da divisao:%d\n Resto:%d\n", *a, *b);
}
