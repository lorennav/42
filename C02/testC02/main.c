#include <unistd.h>
#include <stdio.h>

char			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
int				ft_str_is_alpha(char *str);
int				ft_str_is_numeric(char *str);
int				ft_str_is_lowercase(char *str);
int				ft_str_is_uppercase(char *str);
int 			ft_str_is_printable(char *str);
char 			*ft_strupcase(char *str);
char			*ft_strlowcase(char *str);
char 			*ft_strcapitalize(char *str);
unsigned int 	ft_strlcpy(char *dest, char *src, unsigned int size);
void 			ft_putstr_non_printable(char *str);
void 			*ft_print_memory(void *addr, unsigned int size);


void	ft_putchar(char A)
{
	write(1, &A, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(void)
{
	ft_putstr("ex00");
	write(1, "\n", 1);
	char	dest[] = "hello world!";
	char 	src[] = "hi, humans!";

	ft_putstr("string dest:");
	ft_putstr(dest);
	write(1, "\n", 1);
	ft_putstr("string src:");
	ft_putstr(src);
	write(1, "\n", 1);
	ft_putstr("new dest:");
	ft_putstr(ft_strcpy(dest, src));
	write(1, "\n", 1);
	ft_putstr("----------------");
	write(1, "\n", 1);


	ft_putstr("ex01");
	write(1, "\n", 1);
	char	dest2[] = "HELLOOOOOOOOOOW"; 
	char 	src2[] = "hi, humans!";
	unsigned int	n = 5;

	ft_putstr("n = 5");
	write(1, "\n", 1);
	ft_putstr("string src:");
	ft_putstr(src2);
	write(1, "\n", 1);
	ft_putstr("string dest:");
	ft_putstr(dest2);
	write(1, "\n", 1);
	ft_putstr("After function. String dest:");
	ft_putstr(ft_strncpy(dest2, src2, n));
	write(1, "\n", 1);
	ft_putstr("----------------");
	write(1, "\n", 1);


	ft_putstr("ex02");
	write(1, "\n", 1);
	char	a[] = "string here123";
	char	b[] = "onlyalphab";
	char    c[] = "";

	ft_putstr(a);
	write(1, "\n", 1);
	ft_putstr(b);
	write(1, "\n", 1);
	ft_putstr("c (empty string) = ");
	ft_putstr(c);
	write(1, "\n", 1);
	ft_putstr("after function, results are: ");
	write(1,"\n", 1);
	printf("%d\n", ft_str_is_alpha(a));
	printf("%d\n", ft_str_is_alpha(b));
	printf("%d\n", ft_str_is_alpha(c));
	ft_putstr("----------------");
	write(1, "\n", 1);

	ft_putstr("ex03");
	write(1, "\n", 1);
	char	v[] = "123aaaaa456";
	char	x[] = "123456";
	char	y[] = "1234 56";
  
	ft_putstr(v);
	write(1, "\n", 1);
	ft_putstr(x);
	write(1, "\n", 1);
  	ft_putstr(y);
  	write(1, "\n", 1);
	ft_putstr("c (empty string) = ");
	ft_putstr(c);
	write(1, "\n", 1);
	ft_putstr("after function, results are: ");
	write(1,"\n", 1);
	printf("%d\n", ft_str_is_numeric(v));
	printf("%d\n", ft_str_is_numeric(x));
	printf("%d\n", ft_str_is_numeric(y));
  	printf("%d\n", ft_str_is_numeric(c));
	ft_putstr("----------------");
	write(1, "\n", 1);

	ft_putstr("ex04");
	write(1, "\n", 1);
	char	f[] = "ABCaaav";
	char	g[] = "abc de";
	
	ft_putstr(b);
	write(1, "\n", 1);
	ft_putstr(v);
	write(1, "\n", 1);
  	ft_putstr(f);
  	write(1, "\n", 1);
	ft_putstr("c (empty string)  = ");
	ft_putstr(c);
	write(1, "\n", 1);
	ft_putstr(g);
	write(1, "\n", 1);
	ft_putstr("after function, results are: ");
	write(1,"\n", 1);
	printf("%d\n", ft_str_is_lowercase(b));
	printf("%d\n", ft_str_is_lowercase(v));
	printf("%d\n", ft_str_is_lowercase(f));
  	printf("%d\n", ft_str_is_lowercase(c));
	printf("%d\n", ft_str_is_lowercase(g));
	ft_putstr("----------------");
	write(1, "\n", 1);

	ft_putstr("ex05");
	write(1, "\n", 1);
	char	w[] = "ABCD";
	char	z[] = "AB CD";
	
	ft_putstr(f);
	write(1, "\n", 1);
	ft_putstr(w);
	write(1, "\n", 1);
  	ft_putstr(c);
	ft_putstr("c (empty string) = ");
	write(1, "\n", 1);
	ft_putstr(z);
	write(1, "\n", 1);
	ft_putstr("after function, results are: ");
	write(1,"\n", 1);
	printf("%d\n", ft_str_is_uppercase(f));
 	printf("%d\n", ft_str_is_uppercase(w));
 	printf("%d\n",ft_str_is_uppercase(c));
  	printf("%d\n", ft_str_is_uppercase(z));
	ft_putstr("----------------");
	write(1, "\n", 1);
	
	ft_putstr("ex06");
	write(1, "\n", 1);
	char	j[] = "§";
	char	l[] = "1234±A";
	
	ft_putstr(x);
	write(1, "\n", 1);
	ft_putstr(j);
	write(1, "\n", 1);
  	ft_putstr(c);
	ft_putstr("c (empty string) = ");
	write(1, "\n",1);
	ft_putstr(l);
	write(1, "\n", 1);
	ft_putstr("after function, results are: ");
	write(1,"\n", 1);
	printf("%d\n", ft_str_is_printable(x));
  	printf("%d\n", ft_str_is_printable(j));
 	printf("%d\n", ft_str_is_printable(c));
 	printf("%d\n", ft_str_is_printable(l));
	ft_putstr("----------------");
	write(1, "\n", 1);

	ft_putstr("ex07");
	write(1, "\n", 1);
	
	
	ft_putstr(dest);
	write(1, "\n", 1);
	ft_putstr("after function, result is: ");
	write(1,"\n", 1);
	printf("%s\n", ft_strupcase(dest));
	ft_putstr("----------------");
	write(1, "\n", 1);

	ft_putstr("ex08");
	write(1, "\n", 1);
	
	ft_putstr(dest);
	write(1, "\n", 1);
	ft_putstr("after function, result is:");
	write(1,"\n", 1);
	printf("%s\n", ft_strlowcase(dest));
  	ft_putstr("----------------");
	write(1, "\n", 1);

	ft_putstr("ex09");
	write(1, "\n", 1);
	char	i[] = "salut, comMent tu vas ? 42MOts quarante-deux; cinquante+et+un";
	char	mmm[] = "5'Upb,a{jhk,i$qwfa";
	char 	fff[] = "q&r=0uh##=@t*~hnll]09yU8e,K9@.@Luzz";
		
	ft_putstr(i);
	write(1, "\n", 1);
	ft_putstr(mmm);
	write(1, "\n", 1);
	ft_putstr(fff);
	write(1, "\n", 1);
	ft_putstr("after function, results are: ");
	write(1,"\n", 1);
	printf("%s\n", ft_strcapitalize(i));
	printf("%s\n", ft_strcapitalize(mmm));
	printf("%s\n", ft_strcapitalize(fff));
  	ft_putstr("----------------");
	write(1, "\n", 1);

	ft_putstr("ex10");
	write(1, "\n", 1);

	ft_putstr("n = 5");
	write(1, "\n", 1);
	ft_putstr("string src:");
	ft_putstr(src2);
	write(1, "\n", 1);
	ft_putstr("string dest:");
	ft_putstr(dest2);
	write(1, "\n", 1);
	printf("return is %d\n", ft_strlcpy(dest2, src2, n));
	ft_putstr("----------------");
	write(1, "\n", 1);

	return (0);

}
/*	ft_putstr("ex11");
	write(1, "\n", 1);
	char	g[] = "§";
	char	h[] = "1234±A";
	
	ft_putstr(x);
	write(1, "\n", 1);
	ft_putstr(g);
	write(1, "\n", 1);
  	ft_putstr(c);
  	write(1, "\n", 1);
	ft_putstr("c = ");
	ft_putstr(h);
	write(1, "\n", 1);
	ft_putstr("after function, results are: ");
	write(1,"\n", 1);
	printf("%d\n", ft_str_is_printable(x));
  	printf("%d\n", ft_str_is_printable(g));
 	printf("%d\n", ft_str_is_printable(c));
 	printf("%d\n", ft_str_is_printable(h));
	ft_putstr("----------------");
	write(1, "\n", 1);
	
	ft_putstr("ex12");
	write(1, "\n", 1);
	char	g[] = "§";
	char	h[] = "1234±A";
	
	ft_putstr(x);
	write(1, "\n", 1);
	ft_putstr(g);
	write(1, "\n", 1);
  	ft_putstr(c);
  	write(1, "\n", 1);
	ft_putstr("c = ");
	ft_putstr(h);
	write(1, "\n", 1);
	ft_putstr("after function, results are: ");
	write(1,"\n", 1);
	printf("%d\n", ft_str_is_printable(x));
  	printf("%d\n", ft_str_is_printable(g));
 	printf("%d\n", ft_str_is_printable(c));
 	printf("%d\n", ft_str_is_printable(h));
	ft_putstr("----------------");
	write(1, "\n", 1);

	return(0);
}
*/
