#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main() {
	int ch,a,b,res=0 ;
	clrscr() ;//!@#$%^&*()
	while(1) {
	  printf("\n\t-----MENU-----\n") ;
	  printf("1.Additiom\n2.Subtraction\n3.Multiplication\n4.Division\n5.Reminder\n6.Exit\n") ;
	  printf("Enter your choice : ") ;
		 scanf("%d",&ch) ;
	  if(ch == 6) {
			 exit(1) ;
	  }
	  switch(ch) {
			 case 1 : printf("Enter the values for A and B : ") ;
							 scanf("%d%d",&a,&b) ;
						 res=a+b ;
						 printf("The result is = %d\n",res) ;\
                   break ;
	  }
	}
}
