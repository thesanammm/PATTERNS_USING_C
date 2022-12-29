/*
  A
  B C
  D E F
  G H I J
  K L M N O
*/
#include<stdio.h>
void main()
{
	int i,j,k=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",64+k);
			k++;
		}
		printf("\n");
	}
}
