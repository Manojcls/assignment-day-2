#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9};
	int i,j,diff;
	int max=a[0];
	int min=a[0];
	printf("the largest number is\n");
	for(i=0;i<10;i++)		{
	if	(a[i]>max)	{
	
		max= a[i];	}
	}
	printf("%d", max);
	
	printf("the smallest number is");
	for (j=0;j,10;j++) 	{
		if (a[j]<min)	{
			min=a[j];
		}
	}
	printf("%d", min);
	
	diff= max-min;
	
	printf("%d", diff);
	
	
	
	return 0;
}
