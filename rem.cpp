#include<iostream>
using namespace std;
main()
{
    int v,n, rem = 0, num, c = 0;
    std::cout<<"Enter number: ";
    std::cin>>n;
    for(;n>0; )
        {
            c++;
            n = n/power;
        }
    std::cout<<"number of digits : "<<c;
}
