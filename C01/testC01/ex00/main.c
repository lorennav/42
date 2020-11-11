#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);

int		main()
{
	int 	a;
	int		*nbr;

	a = 0;
	nbr = &a;
	ft_ft(&a);
	printf("%d\n", a);
	return (0);
}
