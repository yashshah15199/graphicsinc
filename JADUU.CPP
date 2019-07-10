#include<stdio.h>
#include<conio.h>
int main()
{
long int a[7],i,y,sum=0;
clrscr();
scanf("%ld",&a[0]);
y=a[0]+299997;
printf("\t\t\t%ld\n",y);
for(i=1;i<7;i++)
{
	if(i%2!=0)
	{
	printf("enter your number\n");
	scanf("%ld",&a[i]);
	}
	else
	{
	a[i]=(99999-a[i-1]);
	printf("my number is:%ld\n",a[i]);
	}
}
for(i=0;i<=6;i++)
{
sum=sum+a[i];
}
printf("\n%ld",sum);
getch();
}