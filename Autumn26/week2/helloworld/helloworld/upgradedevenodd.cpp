#include <iostream>

int main(){
    int n, rem;
    std::cout<<"please enter a number"<<std::endl;
    std::cin>>n;

    rem = n%2;
    if (rem == 0){
        std::cout<<"this number is even"<<std::endl;

    }
    else {
        std::cout<<"this number is odd"<<std::endl;
    }

}