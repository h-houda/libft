#include "libft.h"
#include <string.h>
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
    return (0);
}
