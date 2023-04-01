#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5};
	int i,diff;
	int max=a[0];
	int min=a[0];
	
	//largest number
	printf("the largest number is\n");
	for (i=0;i<5;i++)		
	{
		if (a[i]>max)	
		{
			max=a[i];
		}
	}
	printf("%d", max);
	
	//smallest number
	printf("the smallest number is\n");
	for(i=0;i<5;i++)	{
		if (a[i]<min)	{
			min=a[i];
		}
	}
	printf("%d", min);
	
	//difference
	printf("the largest difference in the array is \n");
	diff=max-min;
	printf("%d", diff);
	
	return 0;
}
