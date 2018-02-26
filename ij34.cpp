 #include<iostream.h>
 #include<ctype.h>
 void main()
 {
  int i,j,k,l,m,n ;
  char ch ;
  cout<<"Enter a number " ;
	cin>>n ;
	 k=65 ;
	 l=n ;
	 for(i=65; i<(65+n); i++)
	 {
	  for(j=1; j<=l; j++)
	  cout<<" " ;
	  l-- ;
	  for(j=65; j<=i; j++,k++)
	  {
		ch=toascii(k) ;
		cout<<ch<<" " ;
	  }
	  cout<<"\n" ;
	 }
	 m=k-1 ;
	 l=1 ;
	 for(i=(65+n); i>64; i--)
	 {
	  for(j=1; j<=l; j++)
	  cout<<" " ;
	  l++ ;
	  for(j=65; j<i; j++,m--)
	  {
		ch=toascii(m) ;
		cout<<ch<<" " ;
	  }
	  cout<<"\n" ;
	 }
 }