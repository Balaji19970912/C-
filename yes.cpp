#include<iostream>
using namespace std ;
int main() {
    char cChoice ;
    do {
        std::cout<<"Press Y to continue and N to quit"<<std::endl ;
        std::cin>>cChoice ;
    }while(cChoice=='Y' || cChoice=='y') ;
  return 0 ;
}
