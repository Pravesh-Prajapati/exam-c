#include<stdio.h>
main()
{
	int i,n, fact=1;
	printf("enter value of n");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		fact=fact*i;
	};
	printf("%d" ,fact);
}
