#include <iostream>
#include <cmath>

int main (){
    int n;
    bool found = false;

    std::cout<<"please enter a number greater than 1: "<<std::endl;
    std::cin>>n;
    int i=2;
    for (; i<= std::sqrt(n); i++ ){
        if (n % i == 0){
            found = true;
            std::cout<<"found factor "<<i<<std::endl;
        }
    }
    std::cout<<"stopped caluclating at divisor = "<<i<<std::endl;

    if (found){
        std::cout<<n<<" is not a prime number."<<std::endl;
    }
    else{
        std::cout<<n<<" is a prime number."<<std::endl;

    }
}