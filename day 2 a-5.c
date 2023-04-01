#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int i;
	
	for(i=0;i<10;i++)	{
		if (i%2==0)	{
			printf("\n %d is an odd number",a[i]);
			
		}
		else 	{
			printf("\n %d is an even number",a[i]);
		}
	}
	return 0;
}
