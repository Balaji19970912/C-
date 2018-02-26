																						 /*Circular Queue*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define qsize 4
int qfull(int *count)
{
	return *count==qsize ? 1 : 0 ;
}
int qempty(int *count)
{
	return *count==0 ? 1 : 0 ;
}
void main()
{
	  int q[qsize],f=0,r=-1,ch,count=0 ;
	  void ins(int [],int *,int *) ;
	  void del(int [],int *,int *,int *) ;
	  void disp(int [],int *,int *) ;
	  printf("Here i have taken the size.\n") ;
	  for(;;)
	  {
			 printf("\n1.Insert\n2.Delete\n3.Display\n4.Clear Screen\n5.Exit\n") ;
			 printf("Input an item : ") ;
				 scanf("%d",&ch) ;
				 switch(ch)
				 {
					  case 1:ins(q,&r,&count) ;
								break ;
					  case 2:del(q,&f,&r,&count) ;
								break ;
					  case 3:disp(q,&f,&count) ;
								break ;
					  case 4:clrscr() ;
								break ;
					  case 5:exit(0) ;
								break ;
					  default:printf("Entered wrong choice.\n") ;
				 }//End of switch.
	  }//End of for.
}//End of main pgm.
void ins(int q[],int *r,int *count)
{
	  int item ;
	  if(qfull(count))
	  {
			 printf("Q size is overflow.\b\n") ;
			 return ;
	  }
	  else
	  {
			 printf("Input an item : ") ;
				 scanf("%d",&item) ;
				 *r=(*r+1)%qsize ;
			 q[(*r)]=item ;
			 *count=*count+1 ;
	  }
}
void del(int q[],int *f,int *r,int *count)
{
	  if(qempty(count))
	  {
			printf("Q size is underflow.\n") ;
			return ;
	  }
	  else
	  {
			printf("Deleted item is %d.\n",q[(*f)]) ;
			*f=(*f+1)%qsize ;
         *count=*count-1 ;
	  }
	  if(*f > *r)
		  *f=0,*r=-1 ;
}
void disp(int q[],int *f,int *count)
{
		int i,j ;
		if(qempty(count))
		{
			printf("Q size is underflow.\n") ;
			return ;
		}
		else
		{
         j=i ;
			for(i=*f; j<=i; j++)
			{
				 printf("%d\t",q[i]) ;
				 i=(i+1)%qsize ;
			}
			printf("\n") ;
		}
}