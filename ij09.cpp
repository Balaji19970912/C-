 #include<iostream.h>
 void main()
 {
  int n ;
  char ch ;
	do
	{
	 cout<<"Enter the number : " ;
	  cin>>n ;
	 cout<<endl ;
	  if(n>=1&&n<=10)
	  {
		cout<<n<<" entered number is in the range." ;
		cout<<endl ;
	  }
	  else
	  {
		cout<<n<<" entered number is not in the range." ;
		cout<<endl ;
	  }
	 cout<<"Do you wnt to continue?In that case press (Y/N) : " ;
	  cin>>ch ;
	 cout<<endl ;
	}while(ch!='n'&&ch!='N') ;
 }