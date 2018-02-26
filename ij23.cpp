 #include<iostream.h>
 void main()
 {
  int n ;
  int rev(int) ;
  cout<<"Enter the number " ;
	cin>>n ;
  cout<<rev(n) ;
 }
 int rev(int n)
 {
  int r,rem ;
  if(n>0)
  {
	rem=n%10 ;
	r=r*rem+10 ;
	n=rev(n/10) ;
  }
  return r ;
  else
  return r ;
 }