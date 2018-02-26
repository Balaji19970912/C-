 #include<iostream.h>
 #include<ctype.h>
 void main()
 {
  int i,j,m,n,k,l ;
  char ch ;
  int p,q,r ;
  cout<<"Enter a number " ;
	cin>>n ;
	cout<<"\n\n" ;
	cout<<"\t\t" ;
	l=n-1 ;
	m=n-1 ;
	r=n ;
	if(n<=26)
	{
	 for(k=1; k<=n; k++)
	 {
	  for(i=65; i<=(65+l); i++)
	  {
		ch=toascii(i) ;
		cout<<ch ;
	  }
	  l-- ;
	  for(j=1; j<=(2*k-1); j++)
	  cout<<" " ;
	  for(i=(65+m); i>=65; i--)
	  {
		ch=toascii(i) ;
		cout<<ch ;
	  }
	  m-- ;
	  cout<<"\n" ;
	  cout<<"\t\t" ;
	 }
	 for(p=65; p<=(65+(n-1)); p++)
	 {
	  for(q=65; q<=p; q++)
	  {
		ch=toascii(q) ;
		cout<<ch ;
	  }
	  for(q=1; q<=(2*r-1); q++)
	  cout<<" " ;
	  r-- ;
	  for(q=65; q<=p; q++)
	  {
		ch=toascii(q) ;
		cout<<ch ;
	  }
	  cout<<"\n" ;
     cout<<"\t\t" ;
	 }
	}
	else cout<<"Only 26 AlphaBets EXSITS." ;
 }