 #include<iostream.h>
 void main()
 {
  int f,i,j,k=1,l,m,n ;
  cout<<"Enter a number " ;
	cin>>n ;
	l=1 ;
	for(i=n; i>0; i--)
	{
	 for(j=1; j<=l; j++)
	 cout<<" " ;
	 l++ ;
    for(j=i; j>0 ; j--,k++)
	 cout<<k<<" " ;
    cout<<"\n" ;
	}
	m=k-1;
	f=n ;
	for(i=1; i<=n; i++)
	{
	 for(j=1; j<=f; j++)
	 cout<<" " ;
	 f-- ;
	 for(j=1; j<=i; j++,m--)
	 cout<<m<<" " ;
	 cout<<"\n" ;
	}
 }