#include <iostream>
#include <cmath>

bool quadsolver(double a, double b, double c, double & x1, double & x2){

    bool realsol;
    double delta;
    delta = b*b- 4*a*c;
    if (delta < 0){
        realsol = false;
    }
    else{
        x1 = (-b + std::sqrt(delta))/(2*a);
        x2 = (-b - std::sqrt(delta))/(2*a);
        realsol = true;
    }
    return realsol;
}

int main(){
    double a,b,c;

    std::cout << "this program finds the real solutions" << std::endl;
    std::cout << "of an equation of the form ax^2 + bx + c = 0" << std::endl;
    std::cout << "please enter the coefficients a, b, c:" << std::endl;

    std::cin>>a>>b>>c;

    double s1,s2;

    if (quadsolver(a,b,c,s1,s2)){
        std::cout<<"first root: "<<s1<<"second root: "<<s2;
    }
    else{
        std::cout<<"no real root"<<std::endl;
    }

}