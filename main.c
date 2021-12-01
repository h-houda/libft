#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int    main(void)
{
   /* printf("//test ft_memmove :// \n\n");
    
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

	printf("\n\n//test ft_strchr :// \n\n");
	printf("strchr == %s\n", strchr("testreussi", 'r')); 
	printf("ft_strchr == %s", ft_strchr("testreussi", 'r')); 
	
	printf("\n\n//test ft_strrchr :// \n\n");
	printf("strrchr == %s\n", strrchr("testreussi", 's')); 
	printf("ft_strrchr == %s", ft_strrchr("testreussi", 's'));*/

	printf("\n\n//test ft_memchr :// \n\n");
	/*char tabc[] = "test reussi";
	printf("tab char original: %s\n", tabc);
	printf("memchr == %s\n", memchr (tabc, 'r', ft_strlen(tabc));
	printf("ft_memchr == %s\n", ft_memchr (tabc, 'r', ft_strlen(tabc));*/
	
	/*char str[] = "ABCDEFG";
	char *ps = memchr(str,'D',strlen(str));
	if (ps != NULL)
		printf ("search character found:  %s\n", ps);
	else
		printf ("search character not found\n");

 	char str2[] = "ABCDEFG";
	char *ps2 = ft_memchr(str,'D',strlen(str));
	if (ps2 != NULL)
		printf ("search character found:  %s\n", ps2);
	else
		printf ("search character not found\n");*/


	printf("\n\n//test ft_memcmp :// \n\n");
	/*char str1[15];
	char str2[15];
	int ret;

	memcpy(str1, "abcdef", 6);
	memcpy(str2, "ABCDEF", 6);

	ret = memcmp(str1, str2, 5);

	if(ret > 0) {
		printf("str2 is less than str1\n\n");
	} else if(ret < 0) {
		printf("str1 is less than str2\n\n");
	} else {
		printf("str1 is equal to str2\n\n");
	}
	
	char str3[15];
	char str4[15];
	int ret2;

	memcpy(str3, "abcdef", 6);
	memcpy(str4, "ABCDEF", 6);

	ret2 = ft_memcmp(str3, str4, 5);

	if(ret > 0) {
		printf("str4 is less than str3");
	} else if(ret < 0) {
		printf("str3 is less than str4");
	} else {
		printf("str3 is equal to str4");
	}*/
	
	printf("\n\n//test ft_strnstr :// \n\n");

	char big[] = "nalaestunchat";
	char little[] = "zozochat";

	printf("strstr == %s\n", strstr(big, little));
	printf("ft_strnstr == %s", ft_strnstr(big, little, ft_strlen(big)));
	
	printf("\n\n//test ft_atoi :// \n\n");

	printf("atoi == %d\n", atoi("--++552qqa"));
	printf("ft_atoi == %d\n", ft_atoi("--++552qqa"));
	printf("atoi == %d\n", atoi("--+78"));
	printf("ft_atoi == %d\n", ft_atoi("--+78"));
	printf("atoi == %d\n", atoi("-50"));
	printf("ft_atoi == %d\n", ft_atoi("-50"));

	printf("\n\n//test ft_strcpy :// \n\n");
	char dest[] = "Epic fail";
	char src[] = "Success";
	printf("Must all be same (3 lines):\n%s\n%s\n%s\n", src, ft_strcpy(dest, src), dest);
	char dest1[] = "";
	char src1[] = "";
	ft_strcpy(dest1, src1);


	printf("\n\n//test ft_strdup :// \n\n");
	printf("%s\n", strcmp(strdup("Test"), ft_strdup("Test")) == 0 ?
			"OK" :
			"Fail");
	printf("%s\n", strcmp(strdup("484df41hdy1h111fs1fsd15sf15sdf115d15fdgs15gfd4sg1615df156g1515g4erg4561esg156gr15156g15eg15eg15e51e51g1515ge156e156eg156e15156ge516e1551eg51eg15g1551eg15e516eg15e15eg1515e55eg51e15e51g5151eg15eg1515egr515151erg51er51e51e551ee5eg51egr51er51er5er5eg51e5r1e51rg5egr5eg51erg5e1r51e6rg51egr516ee5g15e1g5e1g5e1g51ger51egr51erg55reg5er55er55"), ft_strdup("484df41hdy1h111fs1fsd15sf15sdf115d15fdgs15gfd4sg1615df156g1515g4erg4561esg156gr15156g15eg15eg15e51e51g1515ge156e156eg156e15156ge516e1551eg51eg15g1551eg15e516eg15e15eg1515e55eg51e15e51g5151eg15eg1515egr515151erg51er51e51e551ee5eg51egr51er51er5er5eg51e5r1e51rg5egr5eg51erg5e1r51e6rg51egr516ee5g15e1g5e1g5e1g51ger51egr51erg55reg5er55er55")) == 0 ?
			"OK" :
			"Fail");

	
	printf("\n\n//test calloc :// \n\n");
	int *p1 = calloc(4, sizeof(int));    // allocate and zero out an array of 4 int
	int *p2 = calloc(1, sizeof(int[4])); // same, naming the array type directly
	int *p3 = calloc(4, sizeof *p3);     // same, without repeating the type name

	if(p2) {
		for(int n=0; n<4; ++n) // print the array
			printf("p2[%d] == %d\n", n, p2[n]);
	}

	free(p1);
	free(p2);
	free(p3);

	printf("\n\n//test ft_calloc :// \n\n");
	int *p4 = ft_calloc(4, sizeof(int));    // allocate and zero out an array of 4 int
	int *p5 = ft_calloc(1, sizeof(int[4])); // same, naming the array type directly
	int *p6 = ft_calloc(4, sizeof *p6);     // same, without repeating the type name

	//printf("%p\n", p5);
	if(p5) {
		for(int n=0; n<4; ++n) // print the array
			printf("p5[%d] == %d\n", n, p5[n]);
	}

	free(p4);
	free(p5);
	free(p6);

	printf("\n\n//test ft_substr :// \n\n");

	char tab[] = "Nalaestunchat";
	printf("ft_substr '%s', 4, 3 == %s\n",tab, ft_substr(tab, 4, 3));
	char tab2[] = "chat";
	printf("ft_substr '%s', 4, 5 == %s\n",tab2, ft_substr(tab2, 4, 5));
	char tab3[] = "";
	printf("ft_substr '%s', 0, 0 == %s\n",tab3, ft_substr(tab3, 0, 0));
	char tab4[] = "estunchat";
	printf("ft_substr '%s', 3, 10 == %s\n",tab, ft_substr(tab4, 3, 10));


return (0);
}
