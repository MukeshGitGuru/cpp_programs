#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size,i =0,element_no;
	printf("Enter array size\n");
	scanf("%d",&size);

	int arr[size];

	printf("Enter array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);

	}

	printf("-- array elements\n");

	for(i=0;i<size;i++)
		printf("%d  \n",arr[i]);

	printf("Enter occurence number \n");
	scanf("%d",&element_no);

	for(i=0;i<size;i++)
	{
		if(arr[i] == element_no)
		{
			printf("find occurence index : %d\n",i);
			break;
		}
		
	}
	return 0;
}


