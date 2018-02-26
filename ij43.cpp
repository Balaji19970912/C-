 #include<iostream.h>
 void main()
 {
  int i,j,k,l,n ;
  cout<<"Enter a number " ;
	cin>>n ;
	l=n ;
	for(i=1; i<=n; i++)
	{
	 for(k=1; k<=l; k++)
	 cout<<" " ;
	 l-- ;
	 for(j=1; j<=i; j++)
	 cout<<"*"<<" " ;
	 cout<<"\n" ;
	}
 }

