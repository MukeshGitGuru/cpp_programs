#include <stdio.h>

int main()
{
	int number,r,res = 0;
	printf("Enter one or more digit number by user\n");
	scanf("%d",&number);

	while(number)
	{
		r = number%10;
		res = res*10 + r;
		number /=10;
	}
	printf("reverse number is :%d\n",res);

	return 0;
}

