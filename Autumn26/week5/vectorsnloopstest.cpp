#include <iostream>
#include <vector>

int main(){
    int tmp =1;

    std::vector<int> v;

    std::cout<<"please enter a sequence terminated by 0"<<std::endl;
    while(tmp != 0){
        std::cin>>tmp;
        v.push_back(tmp);
    }

    std::cout<<"the sequence is: ";
    for (int i=0; i<v.size(); i++){
        std::cout<<v[i]<<" ";
    }

    std::cout<<"the reversed sequence is: ";
    for (int i=v.size()-1; i>=0; i--){
        std::cout<<v[i]<<" ";
    }

}