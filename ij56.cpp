#include<stdio.h>
#include<math.h>
void main()
{
	 int n,temp,rem,sum=0 ;
	 printf("Enter a number : ") ;
		 scanf("%d",&n) ;
		 temp=n ;
		 while(n!=0)
		 {
			  rem=n%10 ;
			  sum=sum+pow(rem,3) ;
			  n=n/10 ;
		 }//End of while.
		 if(sum==temp)
			  printf("%d is an ARMSTRONG number.\n",temp) ;
		 else
           printf("%d is not an ARMSTRONG number.\n",temp) ;
}
