 #include<iostream.h>
 #include<ctype.h>
 void main()
 {
  int n,i,j,k,l ;
  char ch ;
  cout<<"Enter a number " ;
	cin>>n ;
  cout<<"\n" ;
	l=1 ;
	k=n-1 ;
	for(i=65; i<(65+n); i++)
	{
	 for(j=1; j<=l; j++)
	 cout<<"*" ;
	 l++ ;
	 for(j=i; j<=i; j++)
	 ch=toascii(j) ;
	 cout<<ch ;
	 for(j=1; j<=(2*k-1); j++)
	 cout<<"." ;
	 k-- ;
	 for(j=i; j<(i<(65+(n-1))) ; j++)
	 ch=toascii(j) ;
	 cout<<ch ;
	 cout<<"\n" ;
	}
 }
