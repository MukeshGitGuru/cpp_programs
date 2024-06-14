#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//decimal to binary representations

void decimaltoBinary(int n);
void binarytoDecimal(int n);
int swap(int* ,int*);
void checksetbit(int n,int i);
int settheithBit(int n, int i);
int clearithBit(int n, int i);
int toggletheithBit(int n, int i);
int removelastsetBit(int n);


void decimaltoBinary(int n)
{
	int res = 0,r,final = 0;

	while(n)
	{
		if(n%2 == 1)
		{
			res = res *10 + 1;
		}
		else
		{
			res = res * 10 + 0;
		}
		n /=2;
	}
	while(res)
	{
		r = res % 10;
		final = final*10 + r;
		res /= 10;
	}
	printf("coverted binary format of decimal number is: %d\n", final);
}

void binarytoDecimal(int n)
{
	int res = 0,r,i = 0;
	while(n)
	{
		r = n%10;
		res = res + r * pow(2,i);
		n /= 10;
		i++;
	}
	printf("converted decimal number to binary is : %d\n",res);
}

int swap(int *a,int *b)
{
	/*
	int temp = *a;
	*a = *b;
	*b = temp;
	*/
	/*
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	*/
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

void checksetbit(int n,int i)
{
	/*
	if((n & (i << i)) != 0)  // for checking left side 
	{
		printf("ith bit is set\n");
	}
	else
	{
		printf("ith bit is not set\n");
	}
	*/

	if(((n>>i) & 1) != 0)
	{
		printf("ith bit is  set\n");
	}
	else
	{
		printf("ith bit is not set\n");
	}
}

int settheithBit(int n, int i)
{
	return (n | (1 << i)); 
}

int clearithBit(int n, int i)
{
	return (n & (~(1 << i)));
}

int toggletheithBit(int n, int i)
{

	return (n ^ (1 << i));
}

int removelastsetBit(int n)
{
	return (n & (n-1));
}
void countsetBits(int n)
{
	int cnt = 0;
	while(n)
	{
		n = n & (n-1);
		cnt++;
	}
	printf("total set bits are : %d\n",cnt);
}

int main()
{
	int n,i;
	printf("Enter the decimal number\n");
	scanf("%d",&n);
	printf("Check ith bit\n");
	scanf("%d",&i);

//	decimaltoBinary(n);
	//binarytoDecimal(n);
//	checksetbit(n,i);
	/*
	int f = settheithBit(n,i);
	printf(" set bit %d\n",f);
	
	int f = clearithBit(n,i);
        printf(" clear bit %d\n",f);
	
	int f = toggletheithBit(n,i);
        printf(" toggle bit %d\n",f);
	int f = removelastsetBit(n);
        printf(" remove last bit %d\n",f);
	*/
	countsetBits(n);
	return 0;

}



