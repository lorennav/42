#include <stdio.h>

int main()
{
	char **c;

	c = ft_split("aabcdefgheb", "cdg");
	printf("%s\n", c[0]);
	printf("%s\n", c[1]);
	printf("%s\n", c[2]);
}
