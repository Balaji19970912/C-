 #include<iostream.h>
 void main()
 {
  int n,i,j,k,prod ;
  cout<<"Enter a number " ;
	cin>>n ;
	k=1 ;
	for(i=1; i<=n; i++)
	{
	 for(j=i; j<=(2*i-1); j++,k++)
	 {
	  prod=k*k ;
	  cout<<" "<<prod<<" " ;
	 }
	 cout<<"\n" ;
	}
 }