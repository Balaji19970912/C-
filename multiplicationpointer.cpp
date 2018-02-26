#include<stdio.h>
#include<malloc.h>
int main() {
    int *n,i,*res,*m ;
    printf("Enter the number whose multiplication you want to find : ") ;
    n=(int *)malloc(sizeof(int)) ;
    m=(int *)malloc(sizeof(int)) ;
    res=(int *)malloc(sizeof(int)) ;
      scanf("%d",m) ;
    printf("Till which number you want to find multiplication : ") ;
      scanf("%d",n) ;
    for(i=0; i<=*n; i++) {
        *res=*m*i ;
        printf("%2d * %2d = %3d\n",*m,i,*res) ;
    }
    return 0 ;
}
