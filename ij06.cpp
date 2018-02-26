 #include<stdio.h>
 void main()
 {
  int n ;
  printf("Enter the number") ;
	scanf("%d",&n) ;
	if(n==2||n==3)
	{
	 printf("%d is a prime number",n) ;
	}
	else if(n%2==0||n%3==0)
	 printf("%d is not a prime number",n) ;
	else
    printf("%d is a prime number",n);
 }
