#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb);
int ft_recursive_factorial(int nb);
int ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
int ft_fibonacci(int index);
int ft_sqrt(int nb);
int ft_is_prime(int nb);
int ft_find_next_prime(int nb);

int main()
{
	printf("-----------EX00(iterativa)------------\n");
	printf("Fatorial de 5 = %d\n", ft_iterative_factorial(5));
	printf("Fatorial de -10 = %d\n", ft_iterative_factorial(-10));

	printf("\n-----------EX01(recursiva)------------\n");
	printf("Fatorial de 5 = %d\n", ft_recursive_factorial(5));
	printf("Fatorial de -10 = %d\n", ft_recursive_factorial(-10));


	printf("\n-----------EX02(iterativa)------------\n");

	printf("4 ^ 4 = %d\n", ft_iterative_power(4,4));
 	printf("-4 ^ 4 = %d\n", ft_iterative_power(-4,4));
 	printf("-5 ^ 5 = %d\n", ft_iterative_power(-5,5));
 	printf("4 ^ -4 = %d\n", ft_iterative_power(4,-4));
 	printf("0 ^ 0 = %d\n", ft_iterative_power(0,0));


	printf("\n-----------EX03(recursiva)------------\n");

	printf("4 ^ 4 = %d\n", ft_recursive_power(4,4));
 	printf("-4 ^ 4 = %d\n", ft_recursive_power(-4,4));
 	printf("-5 ^ 5 = %d\n", ft_recursive_power(-5,5));
 	printf("4 ^ -4 = %d\n", ft_recursive_power(4,-4));
 	printf("0 ^ 0 = %d\n", ft_recursive_power(0,0));


	printf("\n-----------EX04------------\n");

	printf("Fibonacci Index 11 = %d\n", ft_fibonacci(11));
	printf("Fibonacci Index 5 = %d\n", ft_fibonacci(5));
	printf("Fibonacci Index -1 = %d\n", ft_fibonacci(-1));
	printf("Fibonacci Index 0  = %d\n", ft_fibonacci(0));
	printf("Fibonacci Index 1 = %d\n", ft_fibonacci(1));


	printf("\n-----------EX05------------\n");

	printf("Sqrt(36) = %d\n", ft_sqrt(36));
	printf("Sqrt(0) = %d\n", ft_sqrt(0));
	printf("Sqrt(1) = %d\n", ft_sqrt(1));


	printf("\n-----------EX06------------\n");
	printf("Is 4 prime? %d\n", ft_is_prime(4));
	printf("Is 2 prime? %d\n", ft_is_prime(2));
	printf("Is 1 prime? %d\n", ft_is_prime(1));
	printf("Is -1 prime? %d\n", ft_is_prime(-1));
	printf("Is 941 prime? %d\n", ft_is_prime(941));
	printf("Is 499 prime? %d\n", ft_is_prime(499));


	printf("\n-----------EX07------------\n");
	printf("What's the next prime number of 4? %d\n", ft_find_next_prime(4));
	printf("What's the next prime number of 35? %d\n", ft_find_next_prime(35));
	printf("What's the next prime number of 686? %d\n", ft_find_next_prime(686));
	printf("What's the next prime number of 1000? %d\n", ft_find_next_prime(1000));
	printf("What's the next prime number of 0? %d\n", ft_find_next_prime(0));

}
