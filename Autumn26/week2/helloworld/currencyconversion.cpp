#include <iostream>

int main(){
    double pounds, euros;

    std::cout<<"Please enter the amount in British Pounds:"<<std::endl;
    std::cin>> pounds;

    euros = pounds * 1.18;

    std::cout<<"The equivalent amount in Euro is "<< euros <<"."<<std::endl;

}