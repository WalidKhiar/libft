/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukhiar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:03:24 by oukhiar           #+#    #+#             */
/*   Updated: 2024/11/04 12:44:32 by oukhiar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>
#include <string.h>
/*int main()
{
	printf("%d", ft_isalpha('h'));
}*/


/*int main()
{
	printf("%d", ft_isdigit(';'));
}*/


/*int main()
{
	printf("%d", ft_isalnum('?'));
}*/


/*int main()
{
	printf("%d",ft_isascii(132));
}*/



/*int main()
{
	printf("%d", ft_isprint(14));
}*/



/*int main()
{
	printf("%d", ft_strlen("walidkhiarkhiarwalid"));
}*/

/*
int main()
{
	int a = 1;
	int c = '4';
	size_t len = 1;
	printf("%s",ft_memset(a, c, len));
}*/








/*#include <string.h>


int main() {
    char buffer[50];
	size_t i = 0;

	ft_bzero(buffer, 10);
		while (i < 2)
		{
			printf("%d", buffer[i]);

			i++;
		}
}*/

/*int main()
{
	char buff[] = "hello, world";

char buff1[] = "hello, world";
	printf("%s\n",ft_memmove(buff1 + 2, buff1, 8));
printf("%s",memmove(buff + 2 , buff, 8));

		}*/




/*int main()
{
	char src[] = "walidkhiarwalidkhair";
	char dest[21];
	printf("%lu\n",ft_strlcpy(dest, src, 20));
	printf("%s\n", dest);
	 printf("%lu\n",strlcpy(dest, src, 20));
	   printf("%s\n", dest);
}*/





/*#include <stdio.h>
#include <string.h>

int main() {
    char dest[20] = "Hello";
    const char *src = "world!";
	char dst[11] = "Hello";
	char *sr = "world!";
    
    size_t result = ft_strlcat(dest, src,11 );
    
    printf("Resulting string: %s\n", dest);
    printf("Total length that was attempted: %zu\n", result);
   
	size_t res = strlcat(dst, sr,11 );
	printf("Resulting string: %s\n", dst);
	printf("Total length that was attempted: %zu\n", res);
	

    return 0;
}*/



/*#include <stdio.h>
#include <ctype.h>

int main() {
    char lowercase = EOF;
    char uppercase = toupper(lowercase);

    printf("Lowercase: %c\n", lowercase);
    printf("Uppercase: %c\n", uppercase);

    return 0;
}*/

/*#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = 'a'; // Example character
    int eof = EOF; // Using EOF constant

    // Convert a lowercase letter
    char upper = toupper(ch);
    printf("Original: %c, Uppercase: %c\n", ch, upper);

    // Attempt to convert EOF
    int result = toupper(eof);
    if (result == EOF) {
        printf("toupper(EOF) returned EOF\n");
    } else {
        printf("toupper(EOF) returned %c\n", result);
    }

    return 0;
}*/

/*int main()
{
	char b = '1';
	int a = ft_tolower(b);
	printf("%c", a);
}*/


#include <stdio.h>
#include <string.h>
/*
int main() {
    const char *str = "Hello, World!";
    char target = 'o';

    char *result = strchr(str, target);
 main.c
    if (result) {
        printf("Found '%c' at position: %ld\n", target, result - str);
    } else {
        printf("Character '%c' not found.\n", target);
    }

    return 0;
*/
#include<unistd.h>

/*int main()
{
	char c = 'g';
	
	const char s[] = "waidkharsghjtj";
	char *res = ft_strchr(s, c);
	printf("%s", res);
}*/


/*int main()
{
	char c = 'i';
	const char s[] = "walidkhiarwalidkhiar";
	printf("%s\n", ft_strrchr(s, c));
	printf("%s", strrchr(s, c));
}*/


/*int main()
{
	const char s1[] = "waligkhiar";
	const char s2[] = "walilkhiar";
	size_t n = 5;
	printf("%d\n", ft_strncmp(s1, s2, n));
	const char s3[] = "waligkhiar";
	  const char s4[] = "walilkhiar";
	    size_t k = 5;
		  printf("%d", strncmp(s3, s4, k));
}*/




/*int main()
{
	const char *s = "walidkhiartanger";
	int c = 'a';
	size_t n = ft_strlen(s);
	printf("%s",ft_memchr(s, c, n));
	return (0);
}*/



/*#include <stdio.h>
#include <string.h>

int main()
{
 int arr1[] = {1, 2, 3};
    int arr2[] = {1, 2, 4};


	printf("%d\n",memcmp(arr1, arr2, sizeof(arr1)));


	char	 *ptr3 = "k";
	char *ptr4 = "a";

	printf("%d",memcmp(ptr3, ptr4, 1));
}*/



/*int main()
{
	printf("%s\n",ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));

	printf("%s",strnstr("lorem ipsum dolor sit amet", "dolor", 15));
}*/





/*#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *numStr = "1234";
    int num = ft_atoi(numStr);
    printf("%d\n", num);
}*/

#include <stdlib.h>
/*
int main ()
{
	size_t count = 5;
	size_t size = sizeof(double);
	int *res = (int *) calloc(count, size);
	for (size_t i = 0; i < count; i++)
		printf("%d",res[i]);
	printf("\n");
	free (res);
}*/






/*int main()
{
	char s1[] = "walid khiar tanger!";
	printf("%s", ft_strdup(s1));
}*/



/*int main ()
{
	char *res;
	res =ft_substr("walidkhiar", 5, 100);
	printf("%s", res);
	return (0);
}*/



/*int main()
{
	char *res;
	res = ft_strjoin("hello, ", "world");
	printf("%s", res);
}*/


/*int main()
{
	const char *res = ft_strtrim("aaaaaaaaaaa", "a");
	printf("*%s*", res);
}*/





void free_split(char **split)
{
    size_t i = 0;
    while (split[i])
    {
        free(split[i]);
        i++;
    }
    free(split);
}




int main()
{
	const char *s = "walid khiar tanger";
	char c = ' ';
	char  **res;
	size_t i = 0;
	res = ft_split(s, c);
	while (res[i])
	{
		printf("word %zu : %s\n", i, res[i]);
		i++;
	}
	free_split(res);
	return (0);
}	




/*
#include <stdio.h>
void add(int a, int b)
{ ,.
    printf("Addition is %d\n", a + b);
}
void subtract(int a, int b)
{
    printf("Subtraction is %d\n", a - b);
}
void multiply(int a, int b)
{
    printf("Multiplication is %d\n", a * b);
}

int main()
{
    // fun_ptr_arr is an array of function pointers
    void (*fun_ptr_arr[])(int, int)
        = { add, subtract, multiply };
    unsigned int ch, a = 15, b = 10;

    printf("Enter Choice: 0 for add, 1 for subtract and 2 "
           "for multiply\n");
    scanf("%d", &ch);

    if (ch > 2)
        return 0;

    (*fun_ptr_arr[ch])(a, b);

    return 0;
}
*/




/*
int main ()
{
	const char *s ="";
	printf("*%s*",ft_strdup(s));
}*/









