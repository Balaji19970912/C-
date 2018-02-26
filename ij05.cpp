 #include<iostream.h>
 void main()
 {
  float given_price,disc,final_amt ;
  int no_items ;
  cout<<"Enter the No of items purchased : " ;
	cin>>no_items ;
  cout<<"Enter the price : " ;
	cin>>given_price ;
	if(no_items>=10&&given_price>=10000.0)
	{
	 disc=given_price*0.1 ;
	 final_amt=given_price-disc ;
	 cout<<"Your Discount amount is : "<<final_amt ;
	}
	else
    cout<<"Your final amount is  : "<<given_price;
 }
