#include <stdio.h>

 

void	ft_rev_int_tab(int *tab, int size);


void putarr(int arr[], int size)

{

    for (int i = 0; i < (size -1); i++)

        printf("%d, ", arr[i]);

    printf("%d\n", arr[size - 1]);

}


int		main (void)

{

	int tab[] = {10, 21, 13, 74, 25, 67};

	int size;

	

	size = 6;


	printf("Original: ");

	putarr(tab, size);


	ft_rev_int_tab(tab, size);


	printf("Modified: ");

	putarr(tab, size);

}
