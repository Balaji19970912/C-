 #include<iostream.h>
 void main()
 {
  int n,i,j,k,l,p,q ;
  cout<<"Enter a number " ;
	cin>>n ;
	l=1 ;
	k=n-1 ;
	for(i=1; i<=n; i++)
	{
	 for(j=1; j<=l; j++)
	 cout<<" " ;
	 l++ ;
	 for(j=i; j<=i; j++)
	 cout<<j ;
	 for(j=1; j<=2*k-1; j++)
	 cout<<" " ;
	 k-- ;
	 for(j=i; j<=i&&j<n; j++)
	 cout<<j ;
	 cout<<"\n" ;
	}
	p=n-1 ;
	q=1 ;
	for(i=n-1; i>0; i--)
	{
	 for(j=1; j<=p; j++)
	 cout<<" " ;
	 p-- ;
	 for(j=i; j<=i; j++)
	 cout<<j ;
	 for(j=1; j<=2*q-1; j++)
	 cout<<" " ;
	 q++ ;
	 for(j=i; j<=i; j++)
	 cout<<j ;
    cout<<"\n" ;
	}
 }