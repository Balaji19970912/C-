 #include<iostream.h>
 #include<process.h>
 void main()
 {
  long int a,b,c,sum=0 ;
  cout<<"Enter the three sides of the triangle : " ;
	cin>>a>>b>>c ;
  if(a<0||b<0||c<0)
  {
	cout<<"......INVALID ENTRY......" ;
	exit(0) ;
  }
  else if(a>b&&a>c)
  {
	sum=b+c ;
	cout<<"Sum = "<<sum ;
	cout<<endl ;
	if(sum>a)
	{
	 cout<<sum<<" is greater than "<<a<<" hence it forms a triangle." ;
	 cout<<endl ;
	}
	else
	{
	 cout<<"Entered values does not form a triangle." ;
	 cout<<endl ;
	}
  }
  else if(b>c&&b>a)
  {
	sum=a+c ;
	cout<<"Sum = "<<sum ;
	cout<<endl ;
	if(sum>b)
	{
	 cout<<sum<<" is greater than "<<b<<" hence it forms a triangle." ;
	 cout<<endl ;
	}
	else
	{
	 cout<<"Entered values does not form a triangle." ;
	 cout<<endl ;
	}
  }
  else  if(c>a&&c>b)
  {
	sum=a+b ;
	cout<<"Sum = "<<sum ;
	cout<<endl ;
	if(sum>c)
	{
	 cout<<sum<<" is greater than "<<c<<" hence it forms a triangle." ;
	 cout<<endl ;
	}
	else
	{
	 cout<<"Entered values does not form a triangle." ;
	 cout<<endl ;
	}
  }
 }