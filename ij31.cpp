 #include<iostream.h>
 void main()
 {
  int i,j,k,l,n ;
  cout<<"Enter a number " ;
	cin>>n ;
	l=n ;
	for(k=1; k<=n; k++)
	{
	 for(j=l; j>=1; j--)
	 cout<<" " ;
    l-- ;
	 for(i=k; i<=k; i++)
	 {
	  for(j=k; j<=(2*k-1); j++)
	  cout<<j<<" " ;
	  cout<<"\n" ;
	 }
	}
 }