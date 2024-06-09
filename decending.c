#include <stdio.h>

int main()
{
	int size,i,j,temp;
	
	printf("Enter array size\n");
	scanf("%d",&size);

	int arr[size];

	printf("Enter array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Array elements\n");

	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}


	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i] <arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	printf("decending order of array \n");

	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

	return 0;
}

