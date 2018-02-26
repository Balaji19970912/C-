 #include<iostream.h>
 void main()
 {
  int i,j,k,l,m,n,o ;
  cout<<"Enter a number " ;
	cin>>n ;
	m=n ;
	o=n ;
	for(i=1; i<=n; i++)
	{
	 for(j=1; j<=m; j++)
	 cout<<j ;
	 m-- ;
	 for(k=1; k<=2*i-1; k++)
	 cout<<" " ;
	 for(l=o; l>0; l--)
	 cout<<l ;
	 o-- ;
	 cout<<"\n" ;
	}
 }