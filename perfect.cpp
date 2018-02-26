#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main() {
  int i,j,n,sum=0 ;
  clrscr() ;
  printf("Enter the number : ") ;
	 scanf("%d",&n) ;
  for(i=1; i<n; i++) {
	 if(n%i == 0) sum+=i ;
  }
  if(sum == n) printf("It is a Perfect number\n") ;
  else printf("It is not a Perfect number\n") ;
  return 0 ;
}
