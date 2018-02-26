 #include<iostream.h>
 void main()
 {
  int n,l,i,j,m,o ;
  cout<<"Enter a number " ;
	cin>>n ;
	l=n ;
   o=n ;
	for(i=1; i<=n; i++)
	{
	 for(j=1; j<=l; j++)
	 cout<<j ;
	 l-- ;
	 for(j=2; j<=(2*i-1); j++)
	 cout<<"*" ;
	 for(m=o; m>0; m--)
	 cout<<m ;
	 o-- ;
    cout<<"\n" ;
	}
 }