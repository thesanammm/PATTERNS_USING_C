/*
  1
  0 1
  0 1 0
  1 0 1 0
  1 0 1 0 1
*/
#include<stdio.h>
void main()
{
	int i,j,k=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",k%2);
			k++;
		}
		printf("\n");
	}
}
