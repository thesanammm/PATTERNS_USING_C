/*
  A
  A B
  A B C
  A B C D E
*/
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",64+j);
		}
		printf("\n");
	}
}
