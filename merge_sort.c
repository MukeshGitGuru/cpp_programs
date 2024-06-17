#include<stdio.h>
#include<stdlib.h>


void merge(int a[],int l,int m,int r)
{
	int n1,n2,i = 0,j = 0,k;

	n1 = m-l+1;
	n2 = r-m;

	int L[n1],R[n2];//make two sub-array 

	for(i=0;i<n1;i++) // copy the elements in subarrays from main array 
		L[i] = a[l+i];
	for(j=0;j<n2;j++)
		R[j] = a[m+1+j];

	i = 0;   //reinitialize the i and j variables
	j = 0;
	k = l;

	while(i<n1 && j<n2) // swap two list of subarray
	{
		if(L[i] <= R[j])
		{	a[k] = L[i];
			i++;
		}
		else
		{
			a[k] = R[j];
			j++;
		}
		k++;
	}

	while(i<n1) //if any elements are in left array then as it is copy on main array 
	{
		a[k] = L[i];
		i++;
		k++;
	}

	while(j<n2) // if any elements are in right array then as it is copy on main array
	{
		a[k] = R[j];
		j++;
		k++;
	}
}

void merge_sort(int A[],int left,int right)
{
	if(left<right)
	{
		int mid = left + (right-left)/2;

		merge_sort(A,left,mid); // recursivly call merge sort for break into sub - arrays 
		merge_sort(A,mid+1,right);

		merge(A,left,mid,right); // call merge function for merge the two sub- arrays elements
	}

}

void printMergearray(int A[],int size)
{
	int i;
	printf("print merge sort array \n");
	for(i=0;i<size;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
}

int main()
{
	int size;
	printf("Enter array size\n");
	scanf("%d",&size);

	int arr[size],i;
	printf("Enter the array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	merge_sort(arr,0,size-1);

	printMergearray(arr,size);

	return 0;
}






