#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main() {
	int n,res ;
	clrscr() ;
	int num(int) ;
	printf("Enter the number : ") ;
	  scanf("%d",&n) ;
	res=num(n) ;
	printf("The result is = %d.\n",res) ;
	return 0 ;
}

int num(int n) {
	int sum=0,rem=0 ;
	while(n > 0) {
		while(n > 0) {
			rem=n%10 ;
			sum=rem+sum ;
			n=n/10 ;
		}
	  //	return sum ;
		if(sum > 9) {
			n=sum ;
			sum=0 ;
		}
		//return sum ;
	}
	return sum ;
}