#include<stdio.h>

array(int a[],int n)
{
	int i,sum=0;
	
	for(i=0;i<n;i++)
	{
		sum= sum + a[i];
		
	}
	printf("Sum of array = %d",sum);
	
}

void main()

{
	int i, n,a[n];
	printf("How many Elemenent Enter in Array = ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",& a[i]);
		
	}
	
	array(a,n);
	
}