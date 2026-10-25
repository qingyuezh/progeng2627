#include <iostream>

int main(){
    int n, i=0, curmax;

    std::cout<<"please enter a number"<<std::endl;
    std::cin>>n;
    curmax = n;

    while (n!=1){
        if(n % 2 == 0){
            n = n/2;
        }
        else{
            n = 3*n+1;
        }
        i++;
        if (n>curmax){
            curmax = n;
        }
        std::cout<<n<<" ";
    }
    std::cout<<"Number of steps taken is: "<<i<<std::endl;
    std::cout<<"The maximum number reached is: "<<curmax<<std::endl;
}