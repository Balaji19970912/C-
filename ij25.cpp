 #include<iostream.h>
 #include<math.h>
 void main()
 {
  int n,i=0,rem,m ;
  cout<<"Enter a number " ;
	cin>>n ;
	m=n ;
	while(n>0)
	{
	 rem=n%10 ;
	 i=i+pow(rem,3) ;
	 n=n/10 ;
	}
	if(m==i)
	 cout<<m<<" is a ARMSTRONG number." ;
	else
    cout<<m<<" is not a ARMSTRONG number." ;
 }