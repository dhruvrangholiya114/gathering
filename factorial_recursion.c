#include<stdio.h>

fact(int num)
{
	if (num<=0)
	{
		return 1;
	}
	else
	{
		num=num*fact(num-1);
	}
	return num;
}
main()
{
	int n,answer;
	printf("Enter number to find the factorial :- ");
	scanf("%d",&n);
	
	answer=fact(n);
	printf("Factorial of %d is %d",n,answer);
}
