 #include<stdio.h>
 #include<conio.h>
 void main()
 {
  int n,i,a[7] ;
  printf("Enter your password having (1-6) digits ") ;
	scanf("%d",&n) ;
	for(i=1; i<=n; i++)
	scanf("%d",&a[i]) ;
  clrscr() ;
  printf("\n") ;
  printf("Your Password is \n") ;
	for(i=1; i<=n; i++)
  printf("* ") ;
  printf("\nTo Confirm enter your password again \n") ;
  getch() ;
 }