 #include<iostream.h>
 #include<ctype.h>
 void main()
 {
  char ch ;
  int i,j,m,n ;
  cout<<"Enter a number " ;
	cin>>n ;
  cout<<"\n\n\t\t" ;
	m=n ;
  for(i=65; i<=(65+(n-1)); i++)
  {
	for(j=65; j<=i; j++)
	{
	 ch=toascii(j) ;
	 cout<<ch ;
	}
	for(j=1; j<=(2*m-1); j++)
	cout<<" " ;
	m-- ;
	for(j=65; j<=i; j++)
	{
	 ch=toascii(j) ;
	 cout<<ch ;
	}
	cout<<"\n\t\t" ;
  }
 }
