#include<stdio.h>

int main()
{
	int num,r,res = 0,Snum;

	printf("Enter a nunber\n");
	scanf("%d",&num);

	Snum = num;
	while(num)
	{
		r = num%10;
		res = res + r*r*r;
		num /= 10;
	}

	if(Snum == res)
		printf("The number is armstrong number\n");

	else
		printf("Not armstrong number\n");

	return 0;
}

