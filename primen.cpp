#include<stdio.h>
#include<stdlib.h>
int main() {
	int i,j,n,count=0,count1=0 ;
	printf("Enter the number : ") ;
	  scanf("%d",&n) ;
	if(n <= 0) {
	  printf("Invalid Input!!!\n") ;
	  exit(1) ;
	}
	printf("\n%d Prime numbers are\n",n) ;
	for(i=1; i<=n*100; i++) {
	  count=0 ;
	  for(j=1; j<=i; j++) {
		 if(i%j == 0) {
			 count++ ;
		 }
	  }
	  if(count == 2) {
		 printf("\n\t%d",i) ;
		 count1++ ;
	  }
	  if(count1 == n) break ;
	}
	return 0 ;
}
