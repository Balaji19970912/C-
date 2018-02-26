 #include<iostream.h>
 #include<ctype.h>
 void main()
 {
  char ch ;
  int n,i,j,l,m ;
  cout<<"Enter a number " ;
	cin>>n ;
	l=n ;
	if(27>n)
	{
	 for(i=65; i<(65+n); i++)
	 {
	  for(j=1; j<=l; j++)
	  cout<<" " ;
	  l-- ;
	  for(j=i; j>64; j--)
	  {
		ch=toascii(j) ;
		cout<<ch ;
	  }
	  m=66 ;
	  for(j=i; j<=(i*2-66); j++,m++)
	  {
		ch=toascii(m) ;
		cout<<ch ;
	  }
	  cout<<"\n" ;
	 }
	}
   else cout<<"\n\t\tOnly 26 AlphaBets EXISISTS." ;
 }