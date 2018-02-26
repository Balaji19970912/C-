 #include<iostream.h>
 void main()
 {
  int n,i,j,k,l,m ;
  cout<<"Enter a number " ;
	cin>>n ;
	l=n ;
	for(i=1; i<=n; i++)
	{
	 for(j=1; j<=l; j++)
	 cout<<" " ;
	 l-- ;
	 for(j=i; j>0; j--)
	 cout<<j ;
	 m=2 ;
	 for(k=i; k<=(2*i-2); k++,m++)
	 cout<<m ;
    cout<<"\n" ;
	}
 }
