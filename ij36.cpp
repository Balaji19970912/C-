 #include<iostream.h>
 void main()
 {
  int i,j,k=1,l,m,n,o ;
  cout<<"Enter a number " ;
	cin>>n ;
	l=n ;
	for(i=1; i<=n; i++)
	{
	 for(j=1; j<=l; j++)
	 cout<<" " ;
	 l-- ;
	 for(j=1; j<=i; j++,k++)
	 cout<<k<<" " ;
	 //cout<<"*"<<" " ;
	 cout<<"\n" ;
	}
	m=2 ;
	o=k-i ;
	for(i=n-1; i>0; i--)
	{
	 for(j=1; j<=m; j++)
	 cout<<" " ;
	 m++ ;
	 for(j=1; j<=i; j++,o--)
	 cout<<o<<" " ;
	  //cout<<"*"<<" " ;
	  cout<<"\n" ;
	}
 }