#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int ft_strncmp(char *s1, char *s2, unsigned int n);

char *ft_strcat(char *dest, char *src);

char *ft_strncat(char *dest, char *src, unsigned int nb);

char *ft_strstr(char *str, char *to_find);

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
  
// ex00  

	char strA[] = "abcd", strB[] = "abCd", strC[] = "abcd";
    int result;
	int result2;

	printf("--------EX00---------\n");
	printf("Str1: %s\n", strA);
	printf("Str2: %s\n", strB);
	printf("Str3: %s\n", strC);


    // comparing strings str1 and str2
    result = strcmp(strA, strB);
	result2 = ft_strcmp(strA, strB);
    printf("strcmp(str1, str2) = %d\n", result);
	printf("ft_strcmp(str1, str2) = %d\n", result2);

    // comparing strings str1 and str3
    result = strcmp(strA, strC);
	result2 = ft_strcmp(strA, strC);
    printf("strcmp(str1, str3) = %d\n", result);
	printf("ft_strcmp(str1, str3) = %d\n", result2);


printf("\n--------EX01---------\n");

//	------ex01-----
	char str1[] = "helLo";
   char str2[] = "hellO WORLD";
   int	result3;
   int	result4;

   	printf("Str1: %s\n", str1);
	printf("Str2: %s\n", str2);

   
   result3 = ft_strncmp(str1, str2, 3);
   result4 = strncmp(str1, str2, 3);



   if(result > 0) {
      printf("For ft_strncmp: ASCII value of first unmatched character of str1 is greater than str2 \n");
   } else if(result < 0) {
      printf("For ft_strncmp: ASCII value of first unmatched character of str1 is less than str2 \n");
   } else {
      printf("For ft_strncmp: Both the strings str1 and str2 are equal \n");
   }

  if(result2 > 0) {
      printf("For strncmp: ASCII value of first unmatched character of str1 is greater than str2 \n");
   } else if(result2 < 0) {
      printf("For strncmp: ASCII value of first unmatched character of str1 is less than str2 \n");
   } else {
      printf("For strncmp: Both the strings str1 and str2 are equal \n");
   }


printf("\n--------EX02---------\n");
// ---ex02---

  char src[] = "This is source";
   char dest[50] = "This is destination";
   char src2[] = "This is source";
   char dest2[] = "This is destination";

	printf("Source: %s\n", src);
	printf("Dest: %s\n", dest);

   strcat(dest, src);
   ft_strcat(dest2, src2);


   printf("Final destination string with original(strcat) : %s\n", dest);
   printf("Final destination string with copy(ft_strcat) : %s", dest2);

 printf("\n--------EX03---------\n");
// -----ex03-----

 	char dest3[30] = "42 School ";
	char src3[] = "Strncat - Implement";
	char dest4[30] = "42 School ";
	char src4[] = "Strncat - Implement";

	printf("Source: %s\n", src3);
	printf("Dest: %s\n", dest3);

	strncat(dest3, src3, 7);
	ft_strncat(dest4, src4, 7);

	printf("After strncat(original): %s\n", dest3);
	printf("After ft_strncat(copy): %s\n", dest4);


printf("\n--------EX04---------\n");
// --- ex04 ----

	char *X = "School 42 - Coding life";
	char *Y = "life";
	char *W = "School 42 - Coding life";
	char *Z = "life";

	printf("Complete string >> %s\n", X);
	printf("To find >> %s\n", Y);
	printf("strstr(original): %s\n", strstr(X, Y));
	printf("ft_strstr(copy): %s\n", ft_strstr(W, Z));


printf("\n--------EX05---------\n");
  // ----- ex05 -----
 
	char first[30] = "This is ";
	char last[] = "a potentially long string";
	char first1[] = "This is ";
	char last1[] = "a potentially long string";
	int size = 16;


	printf("Str1: %s\n", first);
	printf("Str2: %s\n", last);
	printf("Value returned original strlcat: %lu\n", strlcat(first, last, size));
	printf("Value returned copy ft_strlcat: %u\n", ft_strlcat(first1, last1, size));

	return (0);
}
