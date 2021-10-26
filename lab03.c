#include <stdio.h>


void main()
{
	int i, j, a[1000], min1, min2, sum;

	for (i = 0; i <= 5; i++) { 
		printf("Enter element: ");
		scanf_s("%i", &a[i]); //enter array from console
		if (a[i] == 0) // program ends when we enter 0
			break;
	}
	min1 = 10000;
	min2 = min1;

	for (j = 0; j < i; j++) { //find the first minimum value of the array
		if (a[j] < min1)
			min1 = a[j];
	}

	for (j = 0; j < i; j++) { //find the second minimum value of the array
		if (a[j] < min2 && a[j] != min1)
			min2 = a[j];
	}

	sum = min1 + min2; //find the sum of minimum values of the array
	int* pSum = &sum;
	printf("Sum of min elements: %i\n", *pSum); // get the sum on the console
}