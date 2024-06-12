#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size;
	printf("Enter size for array\n");
	scanf("%d",&size);

	int arr[size],fr[size];
	int cnt = 0,i,j;

	printf("Enter array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);

		fr[i] = -1;

	}
	
	for(i=0;i<size;i++)
	{
		cnt = 1;
		for(j=i+1;j<size;j++)
		{
			if(arr[i] == arr[j])
			{
				cnt++;
				fr[j] = 0;
			}
		}

		if(fr[i] != 0)
		{
			fr[i] = cnt;
		}
	}

	for(i=0;i<size;i++)
	{
		if(fr[i] != 0)
		{

			printf("array element = %d  , freq in array = %d\n",arr[i],fr[i]);
		}
	}
	return 0;
}









		

