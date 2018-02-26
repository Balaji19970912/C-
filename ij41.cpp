 #include<iostream.h>
 void main()
 {
  int n,i,j ;
  cout<<"Enter a number " ;
	cin>>n ;
	for(i=0; i<=n; i++)
	{
	 for(j=i; j<=i; j++)
	 cout<<j<<"*"<<j<<"*"<<i<<"="<<j*j*i ;
    cout<<"\n" ;
	}
 }