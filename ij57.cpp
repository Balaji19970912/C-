#include<stdio.h>
void main()
{
	long int n,temp,rem,fact,sum=0,i ;
	printf("Enter a number : ") ;
		scanf("%ld",&n) ;
		temp=n ;
		while(n>0)
		{
			rem=n%10 ;
			{
			   fact=1 ;
				for(i=1; i<=rem; i++)
					fact=fact*i ;
			}
			sum=sum+fact ;
			n=n/10 ;
		}//End of while.
	if(sum==temp)
		printf("%ld is a 'STRONG NUMBER'.\n",temp) ;
	else
		printf("%ld is not a 'STRONG NUMBER'.\n",temp) ;
}//End of main