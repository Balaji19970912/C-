#include<iostream>
using namespace std ;
int main(){
    int i,res,n,m ;
    std::cout<<"Enter the number whose multiplication you want : " ;
      std::cin>>m ;
    std::cout<<"Till where you want multiplication : " ;
      std::cin>>n ;
    for(i=0; i<=n; i++) {
        res=m*i ;
        std::cout<<m<<"*"<<i<<" = "<<res<<std::endl ;
    }
    return 0 ;
}
