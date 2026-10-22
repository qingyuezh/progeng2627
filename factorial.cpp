#include <iostream>

int main(){
    int n, fact=1;
    std::cin>>n;
    for (int i=0; i<n; i++){
        fact = (1+i)*fact;
    }
    std::cout<<fact<<std::endl;
}