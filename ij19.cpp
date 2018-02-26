 #include<iostream.h>
 void first_func(void) ;
 void main()
 {
  first_func() ;
 }
 void first_func()
 {
  int n,i,j,k,m,o ;
  cout<<"Enter how many stars (*) lines you want : " ;
	cin>>n ;
	o=2*n ;
	for(i=0;i<=n;i++)
	{
	 for(j=1;j<=o;j++)
	 cout<<" " ;
	 o-- ;
    for(k=1;k<=2*i-1;k++)
	 cout<<"*" ;
	 cout<<"\n" ;
	 for(m=1;m<=n;m++)
	 cout<<" " ;
	 cout<<"\n" ;
	}
 }