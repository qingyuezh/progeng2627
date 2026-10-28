#include <iostream>

int smallest(int n){
    for (int i =2; i<n ; i++){
        if (n%i == 0){
            return i;
        }
       
    }
    return 0;
}


int main(){
    int L,H;
    std::cin>>L>>H;
    for (int i = L; i<=H ; i++){
        if(smallest(i) == 0){
            std::cout<< i<<std::endl;
        }
    }
}