#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	int a[n],i,s=0;
	printf("enter the  number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	printf("%d is sum of all digit::",s);
}
