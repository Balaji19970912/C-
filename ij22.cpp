 #include<iostream.h>
 void main()
 {
  int a,b,i,j,l,m=1,n ;
  cout<<"Enter a number " ;
	cin>>n ;
	/*l=n ;
	for(a=1; a<=n; a++)
	{
	 for(b=1; b<=l; b++)
	 cout<<" " ;
	 l-- ;
	 for(b=1; b<=(2*a-1); b++)
	 cout<<"*" ;
	 cout<<"\n" ;
	}*/
	for(i=n; i>0; i--)
	{
	 for(j=1; j<=m; j++)
	 cout<<" " ;
	 m++ ;
	 for(j=1; j<=(2*i-1); j++)
	 cout<<"*" ;
	 cout<<"\n" ;
	}
	l=n ;
	for(a=1; a<=n;a++)
	{
	 for(b=1; b<=l; b++)
	 cout<<" " ;
	 l-- ;
	 for(b=1; b<=(2*a-1); b++)
	 cout<<"*" ;
    cout<<"\n" ;
	}
 }