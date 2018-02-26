 #include<iostream.h>
 void main()
 {
  int i,j,n ;
  cout<<"Enter a number " ;
	cin>>n ;
	for(i=1; i<=n; i++)
	{
	 for(j=1; j<=i; j++)
	 cout<<" " ;
	 for(j=i; j<=n; j++)
	 cout<<j<<" " ;
    cout<<"\n" ;
	}
 }