 #include<iostream.h>
 void main()
 {
  int n ;
  cout<<"Enter the number : " ;
	cin>>n ;
	if(n%6==0)
	{
	 if(n%7==0)
	 {
	  cout<<n<<" is divisible by both 6 and 7." ;
	 }
	 else
	 {
	  cout<<n<<" is divisible,only by 6." ;
	 }
	}
	else
    cout<<n<<" is divisible,only by 7." ;
 }