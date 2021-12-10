#include <stdio.h>
void main()
{
	int i=0,n;
	printf("enter the value of n\n");
	scanf("%d",&n);

	while(i<n)
	{
		if(i%2==0)
		{
			printf("\n%d",i);
		}
		i++;
	}
}