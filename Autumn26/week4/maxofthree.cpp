#include <iostream>

double maxthree(double a, double b, double c){
    if (a-b>=0, a-c>= 0){
        return a;
    }
    else if (b-a>0, b-c>0){
        return b;
    }
    else{
        return c;
    }
}

int main(){

    std::cout<<(maxthree(3,2,0)== 3)<<std::endl;
    std::cout<<(maxthree(3,5,9)== 9)<<std::endl;
    std::cout<<(maxthree(7,2,5)== 7)<<std::endl;
    std::cout<<(maxthree(1,1,1)== 1)<<std::endl;

}