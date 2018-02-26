 #include<iostream.h>
 void main()
 {
  int marks,att_per ;
  char grade ;
  cout<<"Enter Marks = " ;
	cin>>marks ;
  cout<<"Enter Attendence percentage = " ;
	cin>>att_per;
	switch(marks>=80)
	{
	 case 1:grade='A' ;
			  cout<<"Grade = "<<grade ;
			  break ;
	 case 0:switch(marks>=60&&marks<80)
			  {
				case 1:switch(att_per>=80)
						 {
						  case 1:grade='A' ;
									cout<<"Grade = "<<grade ;
									break ;
						  case 0:grade='B' ;
									cout<<"Grade = "<<grade<<"\n" ;
									break ;
						 }
                   break;
				}
				break ;
	 }
	 switch(marks>=80)
	 {
	 case 0:switch(marks>=35&&marks<60)
			  {
				case 1:switch(att_per>=80)
						 {
						  case 1:grade='C';
									cout<<"Grade = "<<grade ;
									break ;
						  case 0:grade='P';
									cout<<"Grade = "<<grade ;
									break ;
						 }
						 break ;
			  case 0:grade='F';
						cout<<"Grade = "<<grade ;
						break ;
			  }
			  break ;
	 }

 }
