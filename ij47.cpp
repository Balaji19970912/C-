 #include<iostream.h>
 #include<ctype.h>
 void main()
 {
  int n,i,j,k ;
  char ch ;
  cout<<"Enter a number : " ;
	cin>>n ;
	k=1 ;
	if(n<27)
	{
	 for(i=65; i<(65+n); i++)
	 {
	  for(j=k; j<=k; j++)
	  cout<<j<<"-" ;
	  k++ ;
	  for(j=i; j<=i; j++)
	  ch=toascii(j) ;
	  cout<<ch ;
	  cout<<"\n" ;
	 }
	}
	else cout<<"\n\t\tOnly 26 AlphaBets EXISISTS." ;
 }
