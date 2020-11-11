#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int 	main(void)
{
	int tab[8] = {88,43,3,5,0,0,1,11};
  	int size = 8;

  	ft_rev_int_tab(tab,size);

  	for( int k = 0; k < size; k++)
  	{
    	fprintf(stdout,"%d\n",tab[k]);
  	}
}
