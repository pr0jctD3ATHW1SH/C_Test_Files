#include <stdio.h>


void ft_swap(int *a, int *b);


int		main(void)

{

	int i  = 7;

	int j  = 3;

	int *a = &i;

	int *b = &j;


	ft_swap(a, b);

	printf("i was 7 and it is : %u\n",*a);

	printf("j was 3 and it is : %u",*b);

}
