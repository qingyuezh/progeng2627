#include <iostream>

int main(){
    int n, curmax, curmin;

    std::cout<<"please enter a number: "<<std::endl;
    std::cin>>n;

    curmax = n;
    curmin = n;

    std::cout<<"The current maximum is "<<curmax<<"and the current minimum is "<<curmin<<std::endl;

    while(n != 0){
        std::cout<<"please enter a number: "<<std::endl;
        std::cin>>n;
        if(n>curmax){
            curmax = n;
        }
        else {
            curmin = n;
        }
        std::cout<<"The current maximum is "<<curmax<<"and the current minimum is "<<curmin<<std::endl;

    }

}