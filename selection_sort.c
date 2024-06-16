///selection sort algorithms in c///////////////////

#include <stdio.h>
#include <stdlib.h>

int min_value(int [],int,int);

int main()
{
	int size;
	printf("Enter array size\n");
	scanf("%d",&size);

	int arr[size],i,temp,loc;
	printf("Enter array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<size-1;i++)
	{
		loc = min_value(arr,i,size);

		temp = arr[i];
		arr[i] = arr[loc];
		arr[loc] = temp;
	}

	printf("Sorted array through selection sort\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

	return 0;
}

int min_value(int arr[],int k,int n)
{
	int min = arr[k];
	int loc = k;
	for(int j = k+1;j<n;j++)
	{
		if(min > arr[j])
		{
			min = arr[j];
			loc = j;
		}
	}
	printf("min value %d ",min);
	return loc;
}








