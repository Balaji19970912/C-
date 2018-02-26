 #include<iostream.h>
 void main()
 {
  int i,j,n ;
  cout<<"Enter a number " ;
	cin>>n ;
	for(i=1; i<=n; i++)
	{
	 for(j=i; j<=n; j++)
	 cout<<" " ;
	 for(j=1; j<=i; j++)
	 cout<<j<<" " ;
	 //cout<<"*"<<" " ;
	 cout<<"\n" ;
	}
 }
/* #include<stdio.h>
 void main()
 {
  int i,j,n ;
  printf("Enter a number ") ;
	scanf("%d",&n) ;
	for(i=1; i<=n; i++)
	{
	 for(j=i; j<=n; j++)
	 printf("1") ;
	 for(j=1; j<=i; j++)
	// printf(" *") ;
	 printf(" %d",j) ;
	 printf("\n") ;
	}
 }*/
