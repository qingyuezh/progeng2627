#include <iostream>

void swap(double & a, double &b){

    double temp;
    temp = a;
    a = b;
    b = temp;

}

void sortthreenumbers(double & a, double & b, double &c){

    double temp;
    if (c<=b){
        swap(b,c);
    }
    if(b<=a){
        swap(a,b);
    }


}

int main(){
    double n1, n2, n3;
    std::cout << "please enter three numbers:" << std::endl;
    std::cin >> n1 >> n2>>n3;
    sortthreenumbers(n1, n2, n3);
    std::cout << n1 << " " << n2 <<" "<< n3 <<std::endl;

}