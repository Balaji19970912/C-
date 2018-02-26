#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define qsize 4
int qfull(int *r)
{
	  return *r==qsize-1 ? 1: 0 ;
}
int qempty(int *f,int *r)
{
	  return *f > *r ? 1 : 0 ;
}
void main()
{
	 int q[qsize],f=0,r=-1,ch ;
	 void ins_front(int [],int *,int *) ;
	 void ins_rear(int [],int *) ;
	 void del_front(int [],int *,int *) ;
	 void del_rear(int [],int *,int *) ;
	 void disp(int [],int *,int *) ;
	 for(;;)
	 {
		  printf("\n1.Insert at front\n2.Insert at rear\n3.Delete at front\n4.Delete at rear\n5.Display\n6.Clear screen\7.Exit pgm\n") ;
		  printf("Input your choice : ") ;
			  scanf("%d",&ch) ;
			  switch(ch)
			  {
					case 1:ins_front(q,&f,&r) ;
							 break ;
					case 2:ins_rear(q,&r) ;
							 break ;
					case 3:del_front(q,&f,&r) ;
							 break ;
					case 4:del_rear(q,&f,&r) ;
							 break ;
					case 5:disp(q,&f,&r) ;
							 break ;
					case 6:clrscr() ;
							 break ;
					case 7:exit(0) ;
							 break ;
					default:printf("Entered wrong choice.\n") ;
			  }//End of switch.
	 }//Endof for.
}//End of main.
void ins_front(int q[],int *f,int *r)
{
	 int item ;
	 if(*f==0&&*r==-1)
	 {
		 printf("Input an item : ") ;
			 scanf("%d",&item) ;
			 q[++(*r)]=item ;
		 return ;
	 }
	 if(*f!=0)
	 {
		 printf("Input an item : ") ;
			 scanf("%d",&item) ;
			 q[--(*f)]=item ;
		 return ;
	 }
	 printf("Insertion at the front is not possible.\n") ;
}
void ins_rear(int q[],int *r)
{
	int item ;
	if(qfull(r))
	{
		printf("Q size is Overflow.\n") ;
		return ;
	}
	else
	{
		printf("Input an item : ") ;
			scanf("%d",&item) ;
			q[++(*r)]=item ;
		return ;
	}
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
		*f=0,*r=-1 ;
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
		*f=0,*r=-1 ;
	}
}
void disp(int q[],int *f,int *r)
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
		 return ;
	}
}
