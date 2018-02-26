 #include<iostream.h>
 #include<process.h>
 void main()
 {
  int opt ;
  float a,b,add,sub,mul,div ;
  cout<<"\t\t-: Pick an option from the list below :-\n" ;
  cout<<"\t\t0.EXIT\n" ;
  cout<<"\t\t1.Evaluate greater than or lesser than.\n" ;
  cout<<"\t\t2.Addition.\n" ;
  cout<<"\t\t3.Subtraction.\n" ;
  cout<<"\t\t4.Multiplication.\n" ;
  cout<<"\t\t5.Division.\n" ;
  cout<<"Enter any 2 values : " ;
	cin>>a>>b ;
  cout<<"Enter option (0-5) : " ;
	cin>>opt ;
	switch(opt)
	{
	 case 0:exit(0);
			  break ;
	 case 1:if(a>b)
				cout<<a<<" is greater than "<<b<<endl ;
			  else
				cout<<a<<" is lesser than "<<b<<endl ;
			  break ;
	 case 2:add=a+b ;
			  cout<<"Addition of 2 values is : "<<add<<endl ;
			  break;
	 case 3:if(a>b)
			  {
				sub=a-b ;
				cout<<"Subtraction of 2 values is : "<<sub<<endl ;
			  }
			  else
				cout<<"Subtraction cannot be done on entered values."<<endl ;
			  break ;
	 case 4:mul=a*b ;
			  cout<<"Multiplication of 2 values is : "<<mul<<endl ;
			  break ;
	 case 5:if(b==0)
			  {
				cout<<"Divide by Zero.This causes an error."<<endl ;
			  }
			  else
			  {
				div=a/b ;
				cout<<"Division of 2 values : "<<div<<endl ;
			  }
			  break ;
	 default:cout<<"You selected an option,which is not there in mentioned options." ;
	}
 }