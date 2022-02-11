#include<stdio.h>
int main ()
{
	int a,b;
	printf("Enter The Number to Check Odd or Even");
    scanf("%d",&a);
	b=a%2;
	switch (b)
	{
		case 1:
			printf("The Number Is odd");
			break;
		default :
			printf("The Number is Even");
	}
}