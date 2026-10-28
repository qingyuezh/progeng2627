#include <iostream>

bool leapyear (int year){
    bool ly = false;
    if (year%4 == 0){
        if (year%100 == 0){
            if (year % 400 == 0){
                ly = true;
            }
        }
        else{
            ly = true;
        }
    }
    return ly;
}

int main(){
    
    int input_year;

    std::cout << "please enter a year" << std::endl;
    std::cin >> input_year;

    if (leapyear(input_year)){
        std::cout<<input_year<<" is a leap year."<<std::endl;
    }
    else{
        std::cout<<input_year<<" is not a leap year."<<std::endl;
    }
}