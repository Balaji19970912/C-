 #include<iostream.h>
 #include<process.h>
 void main()
 {
  long int n,fact ;
  long int fact(long int) ;
  char ch ;
  cout<<endl ;
  cout<<"Enter a number : " ;
	cin>>n ;
	do
	{
	 if(n<0)
	 {
	  cout<<"----Invalid Input----" ;
	  exit(0) ;
	 }
	 fact(long int) ;
	 cout<<"Do you want to continue?(Y/N) : " ;
	  cin>>ch ;
	 cout<<endl ;
	}while(ch!='N'&&ch!='n') ;
 }
 long int fact(long int n)
 {
  long int i,fact ;
  fact=1 ;
  for(i=1;i<=n;i++)
  {
	fact=n*i ;
  }
  cout<<"Factorial of "<<n<<" is "<<fact<<endl ;
  return fact ;
 }
