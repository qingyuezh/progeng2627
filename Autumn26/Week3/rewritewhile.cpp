#include <iostream>

int main(){
    int n, i=0 , p;
    std::cin>>n;

    while (i<n){
        p = 0;
        while (p<n){
            p = p +1;
            std::cout<<"*";
        }
        i = i+1;
        std::cout<<std::endl;
    }
}