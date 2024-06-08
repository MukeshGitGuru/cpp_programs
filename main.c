#include<stdio.h>
#include<stdlib.h>

int main()
{

	int size,sum = 0;
	printf("Enter size for array\n");
	scanf("%d",&size);

	int arr[size];
	int i;

	printf("Enter array elements for array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);

	}

	printf("print array elements\n");
	for(i=0;i<size;i++)
	{
		printf("%d \n",arr[i]);
	}

	printf("addition of array elments \n");

	for(i=0;i<size;i++)
	{
		sum += arr[i];
	}

	printf("sum of array elements is : %d\n",sum);

	return 0;
}

