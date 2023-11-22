/*				* * * * *
				*       *
				*       *
				*       *
				* * * * *				*/



#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the no of sequence : ");
	scanf("%d",&n);
	if(n>0)
	{
		 for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(i==1||i==n||j==1||j==n)
					printf("* ");
				else
					printf("  ");		//Double space recuired
			}
			printf("\n");
		}	
	}
	else
		printf("!!! Please enter a positive integer !!!") ;
}