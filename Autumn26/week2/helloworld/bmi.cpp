#include <iostream>

int main(){
    double weight, height, BMI;
    std::cout<<"Please enter your weight in kg:"<<std::endl;
    std::cin>>weight;
    std::cout<<"Please enter your height in meters:"<<std::endl;
    std::cin>>height;
    
    BMI = weight / (height * height);

    std::cout<<"Your BMI is "<<BMI<<"."<<std::endl;

}