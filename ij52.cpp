#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<alloc.h>
void main()
{
	 int *q,f=0,r=-1,ch,size ;
	 void ins(int *,int *,int) ;
	 void del(int *,int *,int *) ;
	 void disp(int *,int *,int *) ;
	 printf("Enter the size : ") ;
		 scanf("%d",&size) ;
	 q=(int *)malloc(sizeof(int)*size) ;
	 for(;;)
	 {
			printf("\n1.Insert \n2.Delete\n3.Display\n4.Clear Screen\n5.Exit pgm\n") ;
			printf("Enter your choice : ") ;
				scanf("%d",&ch) ;
				switch(ch)
				{
					 case 1:ins(q,&r,size) ;
							  break ;
					 case 2:del(q,&f,&r) ;
							  break ;
					 case 3:disp(q,&f,&r) ;
							  break ;
					 case 4:clrscr() ;
							  break ;
					 case 5:exit(0) ;
							  break ;
					 default:printf("Entered wrong choice.\n") ;
				}//End of switch.
	 }//End of for.
}//End of main pgm.
void ins(int *q,int *r,int size)
{
	 int item ;
	 if(*r==size-1)
	 {
		 printf("Q size is overflow.\n") ;
		 return ;
	 }
	 else
	 {
		 printf("Input an item : ") ;
			 scanf("%d",&item) ;
			 *r=*r+1 ;
		 *(q+*r)=item ;
	 }
}
void del(int *q,int *f,int *r)
{
	if(*r==-1)
	{
		printf("Q size is underflow.\n") ;
		return ;
	}
	printf("Deleted item is %d.\n",*(q+*f)) ;
	*f=*f+1 ;
	if(*f > *r)
	   *f=0,*r=-1 ;
}
void disp(int *q,int *f,int *r)
{
	int i ;
	if(*r==-1)
	{
		printf("Q size is underflow.\n") ;
		//return ;
	}
	for(i=*f; i<=*r; i++)
	  printf("%d\t",*(q+i)) ;
	printf("\n") ;
}
