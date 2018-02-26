#include<stdio.h>
#include<conio.h>
int main() {
	int i,j,n,count=0,k=0 ;
	printf("\tCalculating for Prime Numbers\n") ;
	printf("Enter the limit : ") ;
	  scanf("%d",&n) ;
	for(i=1; i<=n; i++) {
		count=0 ;
		for(j=1; j<=i; j++) {
		  if(i%j == 0) count++ ;
		}
		if(count == 2) {	printf("%d\n",i) ; k++ ;}
	}
	printf("Total number of Prime numbers are %d.\n",k) ;
	return 0 ;
}
