 #include<iostream.h>
 void main()
 {
  int n,i,j ;
  cout<<"Enter a number " ;
	cin>>n ;
	for(i=1; i<=n; i++)
	{
	 for(j=i; j<=i; j++)
    cout<<i ;
	 for(j=1; j<=i; j++)
	 cout<<" " ;
    cout<<"\n" ;
	}
 }