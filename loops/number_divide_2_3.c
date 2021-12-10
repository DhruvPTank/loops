#include <stdio.h>
void main()
{
	int i=0,n,q;
	printf("enter the value of n\n");
	scanf("%d",&n);
	printf("enter the value of q\n");
	scanf("%d",&q);
    i=n;
	while(i>=n && i<=q)
	{
	
			if(i%2==0 && i%3!=0)
			{
			printf("\n%d",i);
		}
	
		i++;
	}
}