#include<stdio.h>

sum(int arr[],int n)
{
	int i,sum=0;
	for(i=0;arr[i]<=n;i++)
	{
		sum=sum+arr[i];	
	}
	return sum;
}
main()
{
	int arr[100],i,n;
	
	printf("enter array size:- ");
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("sum of all elements of array = %d",sum(arr,n));	
}
