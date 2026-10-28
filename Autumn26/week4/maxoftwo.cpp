#include <iostream>

double maxtwo(double a, double b){
    if (a-b>=0){
        return a;
    }
    else{
        return b;
    }
}

int main(){

    std::cout<<(maxtwo(3,2)== 3)<<std::endl;
    std::cout<<(maxtwo(3,5)== 5)<<std::endl;
    std::cout<<(maxtwo(7,2)== 7)<<std::endl;

}