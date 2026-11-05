#include <iostream>
#include <vector>

int main(){
    int n, x, t;

    std::vector<int> v;
    std::cout<<"please enter the number of items: "<<std::endl;
    std::cin>>n;
    std::cout<<"please enter the corresponding items: "<<std::endl;
    for (int i=0; i<n; i++){
        std::cin>>x;
        v.push_back(x);
    }

    std::cout<<"please enter the value t for which all values above t will not be printed: "<<std::endl;
    std::cin>>t;

    for (int i=0; i<n ; i++){
        if (v[i]<= t){
           std::cout<<v[i]<<" ";
        }
    }

}