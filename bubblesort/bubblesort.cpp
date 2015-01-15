#include <stdio.h>

void swap(int * a, int * b);
void printarr(int * arr,int size);

void main() {

	printf("hello C world!\n");
	printf("Bubble sort\n\n");

	int arr[] = {34,27,35,1,23,19,85,67,4,10};
	
	printarr(arr,sizeof(arr)/4);
	printf("\n");
	for(int i = 0; i<sizeof(arr)/4; i++)
	{
		for(int j = 0; j<sizeof(arr)/4 - 1; j++)
		{
			if(arr[j] >= arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
				printarr(arr,sizeof(arr)/4);
			}
			
		}
		printf("\n");
	}

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
	printf("arr = {");
	for(int i = 0; i<size; i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("}\n");
}