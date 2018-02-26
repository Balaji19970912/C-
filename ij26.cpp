 #include<stdio.h>
 #include<ctype.h>
 void main()
 {
  int n,i,j,l,m,k ;
  printf("Enter a number:") ;
	scanf("%d",&n) ;
  printf("\n\n") ;
  printf("\t\t") ;
	l=n-1 ;
	m=n-1 ;
	if(n<=26)
	{
	 for(k=1; k<=n; k++)
	 {
	  for(i=65; i<=(65+l); i++)
	  printf("%c",toascii(i)) ;
	  l-- ;
	  for(j=1; j<=(2*k-1); j++)
	  printf("*") ;
	  for(i=(65+m); i>=65; i--)
	  printf("%c",toascii(i)) ;
	  m-- ;
	  printf("\n") ;
     printf("\t\t") ;
	 }
	}
	else printf("Only 26 AlphaBets EXSISTS.") ;
 }