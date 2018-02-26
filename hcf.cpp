#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	 int a,b,m,n,rem=0,res,temp ;
	 clrscr() ;
	 printf("Enter the values for A and B : ") ;
		scanf("%d%d",&a,&b) ;
	 if(a<=0 || b<=0) {
		  printf("Invalid input please enter again!\n") ;
		  exit(1) ;
	 }
	 if(b > a) {
		  m=b ;
		  n=a ;
	 }
	 else {
		  m=a;
		  n=b;
	 }
	 while(1) {
		 res=m-n ;
		 if(n/res == 0) {
			 printf("HCF is %d\n",res) ;
			 break ;
		 }
		 m=res ;
	 }
	 /*do {
		 res = a/b ;
		 rem = a%b ;
		 printf("res %d\n",rem) ;
		 rem = res ;
		 if(rem == 0 ) {
			 res=a ;
			 break ;
		 }
		 else {
			 temp=rem ;
		 }
		 rem = a%temp ;
	 }while(rem != 0) ;
	 printf("HCF is %d\n",res) ; */
}