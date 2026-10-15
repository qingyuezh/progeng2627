#include <iostream>
// string already included inside iostream
#include <string>
int main(){
    std::string user_name, user_surname;
    std::cout<<"What is your name?"<<std::endl;
    std::cin>>user_name;
    std::cout<<"What is your surname?"<<std::endl;
    std::cin>>user_surname;
    std::cout<<"hello, "<<user_name<<" "<<user_surname<<"!";
}