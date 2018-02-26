 #include<iostream.h>
 void main()
 {
  int i,j,n,k ;
  cout<<"Enter a number : " ;
	cin>>n ;
	for(i=1;i<=n;i++)
	{
	  for(j=1;j<=n;j++)
		cout<<" " ;
		n-- ;
	  for(k=1;k<=2*i-1;k++)
		cout<<"*" ;
		cout<<"\n" ;
	 }
 }