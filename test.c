#include "./ft_printf/ft_printf.h"
#include <stdio.h>

int	main()
{
	int	printfrtn;

	char	*str1;
	int		num1;
	
	str1 = "test";
	num1 = 2147483647;
	printfrtn = printf("printf, %%d : \"%d\"\n", num1);
	printf("printfrtn : %d\n",printfrtn);
	
	printfrtn = printf("printf, %%i : \"%i\"\n", num1);
	printf("printfrtn : %d\n",printfrtn);
	
	printfrtn = printf("printf, %%x : \"%x\"\n", num1);
	printf("printfrtn : %d\n",printfrtn);
	printfrtn = printf("printf, %%X : \"%X\"\n", num1);
	printf("printfrtn : %d\n",printfrtn);

	printfrtn = printf("%s\n", str1);
	printf("%d\n", printfrtn);
	printf("ft_printf str test#######\n");
	printfrtn = ft_printf("%stest\n", str1);
	printf("%d\n", printfrtn);
	printf("printf str test#######\n");
	printfrtn = printf("%stest\n", str1);
	printf("%d\n", printfrtn);

	printf("\n");

	printf("ft_printf char test#######\n");
printfrtn = 	ft_printf("%ctest\n", *str1);
	printf("%d\n", printfrtn);
	printf("printf char test#######\n");
printfrtn = 	printf("%ctest\n", *str1);
	printf("%d\n", printfrtn);

	printf("\n");

	printf("ft_printf int test#######\n");
	ft_printf("%dtest\n", num1);
	printf("printf int test#######\n");
	printf("%dtest\n", num1);

	printf("\n");
	num1 = 2147483647;
	printf("ft_printf int test#######\n");
	printf("printf int test#######\n");
	printf("%dtest\n", num1);

	printf("\n");
	int	num2;
	num2 = (int)2147483648;
	printf("ft_printf int test#######\n");
	ft_printf("%itest\n", num2);
	printf("printf int test#######\n");
	printf("%itest\n", num2);

	printf("\n");
	num2 = -2147483647;
	printf("printf unsigned int test#####\n");
	printf("%utest\n", num2);
	printf("ft_printf unsigned int test#####\n");
	ft_printf("%utest\n", num2);

	printf("\n");
	num1 = 2147483647;
	printf("printf x test####\n");
	printf("%xtest\n", num1);
	printf("ft_printf x test####\n");
	ft_printf("%xtest\n", num1);


	int	n;

printf("\n");
	num1 = -2147483647;
	printf("printf x test####\n");
	n= printf("%xtest\n", num1);
	printf("%d\n", n);
	printf("ft_printf x test####\n");
	n=ft_printf("%xtest\n", num1);
	printf("%d\n", n);
printf("\n");
	num1 = 0;
	printf("printf x test####\n");
	printf("%xtest\n", num1);
	printf("ft_printf x test####\n");
	ft_printf("%xtest\n", num1);

	printf("\n");
	str1 = "t";
	printf("printf p test####\n");
	n = printf("%p\n", str1);
	printf("%d\n", n);
	
	printf("ft_printf p test####\n");
	n = ft_printf("%p\n", str1);
	printf("%d\n", n);

	printf("\n");
	n=printf("printf %%test###\n");
	printf("%d\n", n);
	n=ft_printf("printf %%test###\n");
	printf("%d\n", n);

	printf("%0\n"); 


	return (0);
}
