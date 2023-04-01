#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9};
	int i;
	int max=a[0];
	printf("the largest number is\n");
	for(i=0;i<10;i++)		{
	if	(a[i]>max)	{
	
		max= a[i];	}
	}
	
	printf("%d",max);
	
	return 0;
}
