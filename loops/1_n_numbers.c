#include <stdio.h>
int  main ()
{
	int a,n;
	a=0;
	printf("enter a number\n");
	scanf("%d" , &n);
	while (a<n)
	{
		printf ("\n %d" , a);
             a++;    
	}
	return 0;
}