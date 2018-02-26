 #include<iostream.h>
 void main()
 {
  int a,b,i,j,l,n ;
  cout<<"Enter a number : " ;
	cin>>n ;
	l=n ;
	for(a=1; a<=n; a++)
	{
	 for(b=1; b<=l; b++)
	 cout<<"1" ;
	 l-- ;
	 for(b=1; b<=(2*a-1); b++)
	 cout<<"*" ;
	 cout<<"\n" ;
	}
	for(i=1; i<=n; i++)
   {
	 for(j=1; j<=i; j++)
	 cout<<"1" ;
	 for(j=1; j<=(i*2-1); j++)
	 cout<<"*" ;
	 cout<<"\n" ;
	}
 }