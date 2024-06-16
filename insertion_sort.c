
#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int [], int);

int main()
{
	int size;
	printf("Enter size for array\n");
	scanf("%d",&size);

	int arr[size],i;
	printf("Enter array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	insertion_sort(arr,size);

	printf("Print array elements\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

	return 0;
}

void insertion_sort(int a[],int n)
{
	int i,j,temp;

	for(i=1;i<n;i++)
	{
		temp = a[i];

		for(j=i-1;j>=0 && temp < a[j];j--)
		{
			a[j+1] = a[j];
		}
		a[j+1] = temp;
	}
}
