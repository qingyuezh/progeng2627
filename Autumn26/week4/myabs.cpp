#include <iostream>

double myabs(double in){

    double abs;

    if (in < 0){
        abs = -in;
    }

    else{
        abs = in;
    }

    return abs;

}

int main(){
    double m;
    std::cout<<"please enter a number"<<std::endl;
    std::cin>>m;
    std::cout<<"abs value is "<<myabs(m)<<std::endl;
}
