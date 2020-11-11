#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str);
void ft_putstr(char *str);
void ft_putnbr(int nb);
int ft_atoi(char *str);
void ft_putnbr_base(int nbr, char *base);


int main()
{

	printf("\n---------EX00-----------\n");
	char *a = "Hello World!";

	printf("%d", ft_strlen(a));

	printf("\n---------EX01-----------\n");
	char *b = "HELLOOOOOOOOWOWOWOOWOWOWOW";
	ft_putstr(b);

	printf("\n---------EX02----------\n");
	int c = -2147483648;
	int d = 52000;
	int e = -32768;

	ft_putnbr(c);
	printf("\n");
	ft_putnbr(d);
	printf("\n");
   	ft_putnbr(e);
	
	printf("\n---------EX03----------\n");

	char *str = " \n\t\r\f  ++--+-++12345aaa0i2345";

	printf("Str test: %s\n", str);
	printf("Resultado: %d", ft_atoi(str));

	printf("\n---------EX04----------\n");
	
	ft_putnbr_base(1234, "01");  	
	printf("\n");
   	ft_putnbr_base(-1234, "01");  	
	
	return 0;	
}
