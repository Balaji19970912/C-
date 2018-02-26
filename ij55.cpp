#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,m,n ;
	printf("Enter a number : ") ;
		scanf("%d",&n) ;
		m=n ;
		for(k=1; k<=n; k++)
		{
		for(i=1; i<=n; i++)
		{
			 for(j=1; j<=m; j++)
			 printf(".") ;
			 m-- ;
			 for(j=i; j<=i; j++)
			 printf("1") ;


			 for(j=3; j<=(2*i-1); j++)
			 printf(".") ;
			 if(i!=1)
			 {
				 for(j=i; j<=i; j++)
				 printf("1") ;
			 }
			 if(i!=n)
			 {
				for(j=(2*i+1); j<=(2*n-1); j++)
				printf(".") ;
				printf("1") ;
			 }
			 printf("\n") ;

		}
      }
}