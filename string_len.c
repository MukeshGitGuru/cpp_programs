#include <stdio.h>
#include <string.h>

int main()
{
	int size,i;

	printf("Enter size for string\n");
	scanf("%d",&size);

	char str[size+1];

	getchar();
	printf("Enter string\n");
	//fgets(str,size+1,stdin);
	scanf("%[^\n]s",str);


	for(i=0;str[i];i++);

	printf("The string length is : %d",i);
	return 0;
}

