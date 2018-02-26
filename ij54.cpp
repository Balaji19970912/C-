																		/*STATIC STACK USING STRUCTURE*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 4
struct stack
{
	 int s[size] ;
	 int top ;
} ;
typedef struct stack Stack ;
void main()
{
	 Stack st ;
	 int ch ;
	 void push(Stack *st) ;
	 void pop(Stack *st) ;
	 void disp(Stack st) ;
	 void peep(Stack st) ;
	 st.top=-1 ;
	 for(;;)
	 {
		  printf("\n1.Push an item\n2.Pop an item\n3.Peep\n4.Display\n5.Exit pgm\n6.Clear Screen\n") ;
		  printf("Input your choice : ") ;
			  scanf("%d",&ch) ;
			  switch(ch)
			  {
					 case 1:push(&st) ;
							  break ;
					 case 2:pop(&st) ;
							  break ;
					 case 3:peep(st) ;
							  break ;
					 case 4:disp(st) ;
							  break ;
					 case 5:exit(0) ;
							  break ;
					 case 6:clrscr() ;
							  break ;
					 default:printf("Entered wrong choice.\n") ;
			  }//End of switch.
	 }//End of for.
}//End of main pgm.
void push(Stack *st)
{
	int item ;
	if(st->top==size-1)
	{
		 printf("Stack Overflow.\n") ;
		 return ;
	}
	else
	{
		printf("Input an item : ") ;
			scanf("%d",&item) ;
			(st->top)++ ;
			 st->s[st->top]=item ;
	}
}
void pop(Stack *st)
{
	if(st->top==-1)
	{
		printf("Stack underflow.\n") ;
		return ;
	}
	else
	{
		printf("Poped out element is %d.\n",st->s[(st->top)--]) ;
	}
}
void peep(Stack st)
{
	if(st.top==-1)
	{
		printf("Stack underflow.\n") ;
		return ;
	}
	else
	{
		printf("Top most element is %d.\n",st.s[st.top]) ;
	}
}
void disp(Stack st)
{
	 int i=st.top ;
	 if(st.top==-1)
	 {
		 printf("Stack underflow.\n") ;
		 return ;
	 }
	 else
	 {
		 for(; i>=0; i--)
		 printf("%2d\n",st.s[i]) ;
	 }
}
