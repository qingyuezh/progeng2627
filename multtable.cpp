#include <iostream>

int main(){
    int n;

    std::cin>>n;

    for (int i=1; i<n+1; i++){

        for (int p=1; p<n+1; p++){
            std::cout<<p*i<<"\t";
        }

        std::cout<<std::endl;
    }

}