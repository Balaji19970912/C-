 #include<iostream.h>
 #include<process.h>
 void main()
 {
  float disc,amt_paid,disc_amt ;
  int opt ;
  cout<<"\t\t-:After Entering the amount Select (1-4) from the below list:-\n" ;
  cout<<"\t\t--------------------------------------------------------------\n" ;
  cout<<"\t\t1.Regular Customer paid by cash 20% disc.\n" ;
  cout<<"\t\t2.Regular Customer paid by credit card 15% disc.\n" ;
  cout<<"\t\t3.Not a Regular Customer but paid by cash 10% disc.\n" ;
  cout<<"\t\t4.EXIT.\n" ;
  cout<<"Enter the total amount : " ;
	cin>>amt_paid ;
	if(amt_paid<=2000)
	{
	 cout<<"Amount Paid : "<<amt_paid<<"\n" ;
	 exit(0) ;
	}
  cout<<"Enter the option seeing from the above list : " ;
	cin>>opt ;
  cout<<"\n" ;
	switch(opt)
	{
	 case 1:disc=amt_paid*0.2 ;
			  disc_amt=amt_paid-disc ;
			  cout<<"Discount Amount to be Paid = "<<disc_amt ;
			  break ;
	 case 2:disc=amt_paid*0.15 ;
			  disc_amt=amt_paid-disc ;
			  cout<<"Discount Amount to be Paid = "<<disc_amt ;
			  break ;
	 case 3:disc=amt_paid*0.1 ;
			  disc_amt=amt_paid-disc ;
			  cout<<"Discount Amount to be Paid = "<<disc_amt ;
			  break ;
	 case 4:exit(0) ;
			  break ;
	 default:cout<<"Your choice is not there in mentioned list." ;
	}
 }