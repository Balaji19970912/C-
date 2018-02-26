																/*PRIORITY QUEUE*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define qsize 10
int qfull(int *r)
{
		return *r==qsize-1 ? 1 : 0 ;
}
int qempty(int *f,int *r)
{
		return *f > *r ? 1 : 0 ;
}
void main()
{
	 int q[qsize],f=0,r=-1,ch ;
	 void ins(int [],int *) ;
	 void disp1(int [],int *,int *) ;
	 void disp2(int [],int *,int *) ;
	 void del_front(int [],int *,int *) ;
	 void del_rear(int q[],int *,int *) ;
		printf("Here i have taken the size as 10.\n") ;
	 for(;;)
	 {
		  printf("\n1.Insert\n2.Delete Front\n3.Delete Rear\n4.Display in ascending order\n5.Display in descending order\n6.Clear Screen\n7.Exit pgm\n") ;
		  printf("Input an number : ") ;
			  scanf("%d",&ch) ;
			  switch(ch)
			  {
					 case 1:ins(q,&r) ;
							  break ;
					 case 2:del_front(q,&f,&r) ;
							  break ;
					 case 3:del_rear(q,&f,&r) ;
							  break ;
					 case 4:disp1(q,&f,&r) ;
							  break ;
					 case 5:disp2(q,&f,&r) ;
							  break ;
					 case 6:clrscr() ;
							  break ;
					 case 7:exit(0) ;
							  break ;
					 default:printf("Entered wrong choice.\n") ;
			  }//End of switch.
	 }//End of for loop.
}//End of main.
void ins(int q[],int *r)
{
	 int item,i ;
	 if(qfull(r))
	 {
		  printf("Q size is Overflow.\n") ;
		  return ;
	 }
	 else
	 {
		  printf("Input an item : ") ;
			  scanf("%d",&item) ;
			  i=*r ;
			  while(i>=0 && item<q[i])
			  {
				  q[i+1]=q[i] ;
				  i-- ;
			  }
			  q[i+1]=item ;
	 }
	 *r=*r+1 ;
}
void del_front(int q[],int *f,int *r)
{
	 if(qempty(f,r))
	 {
		  printf("Q size is underflow.\n") ;
		  return ;
	 }
	 else
	 {
		  printf("Deleted item is %d.\n",q[(*f)++]) ;
		  return ;
	 }
	 if(*f > *r)
	 {
		 *f=0 ;
		 *r=-1 ;
	 }
}
void del_rear(int q[],int *f,int *r)
{
	 if(qempty(f,r))
	 {
		 printf("Q size is underflow.\n") ;
		 return ;
	 }
	 else
	 {
		 printf("Deleted item is %d.\n",q[(*r)--]) ;
		 return ;
	 }
	 if(*f > *r)
	 {
		 *f=0 ;
		 *r=-1 ;
	 }
}
void disp1(int q[],int *f,int *r)
{
	 int i ;
	 if(qempty(f,r))
	 {
		 printf("Q size is underflow.\n") ;
		 return ;
	 }
	 else
	 {
		  for(i=*f; i<=*r; i++)
			 printf("%d\t",q[i]) ;
		  printf("\n") ;
	 }
}
void disp2(int q[],int *f,int *r)
{
	int i ;
	if(qempty(f,r))
	{
		printf("Q size is underflow.\n") ;
		return ;
	}
	else
	{
		for(i=*r; i>=*f; i--)
			printf("%d\t",q[i]) ;
		printf("\n") ;
	}
}