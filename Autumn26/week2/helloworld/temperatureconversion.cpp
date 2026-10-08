#include <iostream>

int main(){

    double cel, far;
    
    std::cout<<"Please enter the temperature in degree celsius:"<<std::endl;
    std::cin>> cel;
    far = ( cel *9/5) +32;
    std::cout<<"The equivalent temperature in farenheit is "<< far <<"."<<std::endl;


}