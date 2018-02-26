 #include<iostream.h>
 void main()
 {
  int a[12],n,i,sum=0 ;
  cout<<"How many cricketers are there in your team ? : " ;
	cin>>n ;
	for(i=1; i<=n; i++)
	{
	 cout<<"\nEnter the player "<<i<<"'s score : " ;
	  cin>>a[i] ;
	 sum+=a[i] ;
	 cout<<"\nCurrent score of the team : "<<sum<<endl ; ;
	}
   cout<<"\nOpponent team requires only "<<(sum+1)<<" runs to WIN." ;
 }