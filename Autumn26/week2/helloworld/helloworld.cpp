#include <iostream>
#include <string>

int main(){
    std::string user_name;
    std::cout<<"What is your name?";
    std::cin>> user_name;
    std::cout<<"hello, "<<user_name<<"!"<<std::endl;
}