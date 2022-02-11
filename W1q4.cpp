#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter Two Numbers");
	scanf("%d %d",&a,&b);
	printf("Press 1 For Addition \n Press 2 for Substraction  \n Press 3 For Multiplication \n Press 4 for division");
	scanf("%d",&c);
	switch (c)
	{
		case 1:
			printf("THE Sum is %d",a+b);
			break;
		case 2:
			printf("The Substraction is %d",a-b);
			break;
		case 3:
			printf("The  Multiplication is %d",a*b);
			break;
		case 4:
			printf("The division is %d",a/b);
			break;
		default:
			printf("Please Enter Numbers From 1 to 4");
	}
}