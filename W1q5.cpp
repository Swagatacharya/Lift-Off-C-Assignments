#include<stdio.h>
#define Pi 3.14
int main()
{
	int r,p,q,s;
	printf("Enter The Radius");
	scanf("%d",&r);
	p=r*2;
	q=2*Pi*r;
	s=Pi*r*r;
	printf("Diameter=%d \n Circumference=%d \n Area=%d",p,q,s);
	
}
