 #include<iostream.h>
 #include<process.h>
 void main()
 {
  int a[50],i,n,sum=0 ;
  cout<<"How many do you want to type ? :" ;
	cin>>n ;
	for(i=1; i<=n; i++)
	{
	 cout<<"\nEnter the number "<<i<<" value : " ;
	  cin>>a[i] ;
	  if(a[i]==0)
	   exit(0) ;
		sum+=a[i] ;
	 cout<<"\nCURRENT sum = "<<sum ;
	}
 }