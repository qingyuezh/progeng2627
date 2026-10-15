#include <iostream>

int main(){
    double length, width, perimeter, area;
    std::cout<<"what is the length of the rectangle?"<<std::endl;
    std::cin>> length;
    std::cout<<"what is the width of the rectangle?"<<std::endl;
    std::cin>> width;
    
    perimeter = 2 * (length + width);

    area = length * width;
    std::cout<<"The perimeter of this rectangle is "<< perimeter<<" units and the area of this rectangle is "<< area <<" units squared."<<std::endl;
}