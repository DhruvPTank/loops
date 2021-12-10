#include <stdio.h>
void main()
{
	int i=0,n,sum=0;
	printf("enter the value of n\n");
	scanf("%d",&n);

	while(i<n)
	{
		sum=sum+i;
		i++;
	}
	printf("%d" ,sum);
	
}