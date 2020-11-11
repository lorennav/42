#include <stdio.h>

int		ft_strlen(char *str);

int		main()
{
	char	*str;
	int		b;

	str = "Hello World, you are nice!";

	b = ft_strlen(str);
	printf("%d\n", b);
}
