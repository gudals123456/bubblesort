#include <stdio.h>

void swap(int * a, int * b);
void printarr(int * arr,int size);

void main() {

	printf("hello C world!\n");
	printf("Bubble sort\n\n");

	int arr[] = {14,27,35,1,23,19,85,67,4,10};

	for(int i = 0; i<sizeof(arr)/4; i++)
	{
		for(int j = 0; j<sizeof(arr)/4; j++)
		{

			if(arr[i] <= arr[j])
			{
				swap(&arr[i],&arr[j]);
			}

		}

	}

	for(int i = 0; i<sizeof(arr)/4; i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	printf("\n\n");
	printarr(arr,sizeof(arr)/4);

}
void swap(int * a, int * b)
{
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;

}

void printarr(int * arr, int size)
{

	for(int i = 0; i<size; i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}

}