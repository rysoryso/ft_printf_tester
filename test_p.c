#include <stdio.h>
#include "../git/ft_printf.h"

int main(void)
{
    int ft;
	int lb;
    char *mem;

    mem = (char *)malloc(10 * sizeof(char));
	if (mem == NULL)
	{
		printf("mem allocate error.\n");
		return (1);
	}
	ft = ft_printf("ft_printf: %p\n", mem);
	lb = printf("   printf: %p\n", mem);
	printf("len_ft: %d\n", ft);
	printf("len_lb: %d\n", lb);
	if(ft == lb)
		printf("OK\n");
	else
		printf("KO\n");
	free(mem);

    //NULL
    ft = ft_printf("ft_printf: %p\n", NULL);
	lb = printf("   printf: %p\n", NULL);
	printf("len_ft: %d\n", ft);
	printf("len_lb: %d\n", lb);
	if(ft == lb)
		printf("OK\n");
	else
		printf("KO\n");

    return 0;
}
