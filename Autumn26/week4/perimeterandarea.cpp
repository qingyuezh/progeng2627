#include <iostream>

void pna(double  w, double l, double & p, double &a){
    p = 2*(w+l);
    a = w*l;
}

int main (){
    double w, l;
    double p, a;

    std::cout<<"for w=3,l=5"<<std::endl;
    pna (3,5,p,a);
    std::cout<<"perimeter is "<<p<<" and area is "<<a<<std::endl;
    std::cout<<"for w=3,l=5"<<std::endl;
    pna (7,18,p,a);
    std::cout<<"perimeter is "<<p<<" and area is "<<a<<std::endl;
    std::cout<<"for w=3,l=5"<<std::endl;
    pna (89,1257,p,a);
    std::cout<<"perimeter is "<<p<<" and area is "<<a<<std::endl;

}