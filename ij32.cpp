 #include<iostream.h>
 void main()
 {
  int i,j,l,k=1,n,m ;
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
	 cout<<"\n" ;
	}
	 l=1 ;
	 m=k-1 ;
	 for(i=n; i>0; i--)
	 {
	  for(j=1; j<=l; j++)
	  cout<<" " ;
	  l++ ;
	  for(j=1; j<=i; j++,m--)
	  cout<<m<<" " ;
	  cout<<"\n" ;
	 }
 }