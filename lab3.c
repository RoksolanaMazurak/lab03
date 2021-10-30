#include <stdio.h>

void main()
{

   int i, j, a[5], min1, min2, sum;

	for (i = 0; i <= 5; i++) 
	{
	 printf("Enter element: ");
			scanf_s("%i", &a[i]);
			if (a[i] == 0)
				break;
    }
		min1 = 10000; 
		min2 = min1;

	for (j = 0; j < i; j++) 
	{
		if (a[j] < min1)
			min1 = a[j];
	}

	for (j = 0; j < i; j++) 
	{
		if (a[j] < min2 && a[j] != min1)
			min2 = a[j];
	}

	sum = min1 + min2;

	int* pSum = &sum;

	printf("Sum of min elements: %i", sum);
}
