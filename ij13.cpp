 #include<iostream.h>
 void main()
 {
  int opt ;
  cout<<"Enter a number : " ;
	cin>>opt ;
	switch(opt)
	{
	 case 0:cout<<"BASIC is easy." ;
			  break ;
	 case 1:cout<<"FORTRAN is fun." ;
			  break ;
	 case 2:cout<<"PASCAL may be structured." ;
			  break ;
	 case 3:cout<<"But C++ is the one." ;
			  break ;
	 default:cout<<"Invalid entry valid 0 to 3." ;
	}
 }