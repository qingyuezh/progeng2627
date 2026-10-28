#include <iostream>

void swap(double & a, double &b){

    double temp;
    temp = a;
    a = b;
    b = temp;

}

void sorttwonumbers(double & a, double & b){

    double temp;
    if(b<= a){
        swap(a,b);
    }

}

int main(){
    double n1, n2;
    std::cout << "please enter two numbers:" << std::endl;
    std::cin >> n1 >> n2;
    sorttwonumbers(n1, n2);
    std::cout << n1 << " " << n2 << std::endl;

}