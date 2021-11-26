#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

int    main(void)
{
    printf("//test ft_memmove :// \n\n");
    
    char    str[] = "Start stop";
    char    *dest = str;
    int        i = 2;
    int        n = 3;
    printf("original = %s\n", dest);
    ft_memmove(dest + i, str, n);
    printf("ft_memmove = %s\n", dest);

    char    str2[] = "Start stop";
    char    *dest2 = str2;
    memmove(dest2 + i, str2, n);
    printf("memmove   = %s\n", dest2);
    
    printf("\n\n//test ft_strlcpy :// \n\n"); 
    	
	char src1a[] = "abcde";
	char dest1a[] = "1234567";
	char src1b[] = "abcde";
	char dest1b[] = "1234567";
	
	char src2a[] = "abcd";
	char dest2a[] = "123";
	char src2b[] = "abcd";
	char dest2b[] = "123";
	
	char src3a[] = "";
	char dest3a[] = "";
	char src3b[] = "";
	char dest3b[] = "";
	
	printf("strlcpy == %d\n", strlcpy(dest1a, src1a, 6));
	printf("ft_strlcpy == %d\n", ft_strlcpy(dest1b, src1b, 6));

	printf("strlcpy == %d\n", strlcpy(dest2a, src2a, 2));
	printf("ft_strlcpy == %d\n", ft_strlcpy(dest2b, src2b, 2));

	printf("strlcpy == %d\n", strlcpy(dest3a, src3a, 1));
	printf("ft_strlcpy == %d\n", ft_strlcpy(dest3b, src3b, 1));

	printf("\n\n//test ft_strlcat :// \n\n");

	char s1a[10] = "Test1";
	char s2a[] = "OK";
	char s1b[10] = "Test1";
	char s2b[] = "OK";
	char s3a[10] = "Same";
	char s4a[] = "Size";
	char s3b[10] = "Same";
	char s4b[] = "Size";
	char s5a[20] = "Shorter";
	char s6a[] = "ThanMyself";
	char s5b[20] = "Shorter";
	char s6b[] = "ThanMyself";
	char s7a[20] = "Shorter";
	char s8a[] = "ThanMyself";
	char s7b[20] = "Shorter";
	char s8b[] = "ThanMyself";

	printf("%s\n", ft_strlcat(s1a, s2a, 6) == strlcat(s1b, s2b, 6) ? "Success" : "Fail");
	printf("%s\n", strcmp(s1a, s1b) == 0 && strcmp(s2a, s2b) == 0 ? "Success" : "Fail");
	printf("%s\n", ft_strlcat(s3a, s4a, 10) == strlcat(s3b, s4b, 10) ? "Success" : "Fail");
	printf("%s\n", strcmp(s3a, s3b) == 0 && strcmp(s4a, s4b) == 0 ? "Success" : "Fail");
	printf("%s\n", ft_strlcat(s5a, s6a, 4) == strlcat(s5b, s6b, 4) ? "Success" : "Fail");
	printf("%s\n", strcmp(s5a, s5b) == 0 && strcmp(s6a, s6b) == 0 ? "Success" : "Fail");
	printf("%s\n", ft_strlcat(s7a, s8a, 0) == strlcat(s7b, s8b, 0) ? "Success" : "Fail");
	printf("%s\n", strcmp(s7a, s7b) == 0 && strcmp(s8a, s8b) == 0 ? "Success" : "Fail");
	return (0);
}
