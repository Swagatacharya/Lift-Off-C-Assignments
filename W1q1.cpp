#include<stdio.h>
int main()
{    
	int c;
	char name[26],e[30],d[60];
	printf("Name-\n");
	gets(name);
	
	printf("Branch- \n");
	gets(e);
	printf("Hobbies- \n");
	gets(d);
	printf("Regd. No- \n");
	scanf("%d",&c);
	printf(" Name-%s \n Regd. No-%d \n Branch-%s \n Hobbies-%s",name,c,e,d);
 return 0; 
}