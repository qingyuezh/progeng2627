#include <iostream>
#include <vector>

int main(){
    int n, x, s, oc = 0;

    std::vector<int> v;

    std::cout<<"please enter the number of items: "<<std::endl;
    std::cin>>n;
    for (int i=0; i<n; i++){
        std::cout<<"please enter a number: "<<std::endl;
        std::cin>>x;
        v.push_back(x);
    }

    std::cout<<"please enter s: "<<std::endl;
    std::cin>>s;
    for (int i=0; i<n; i++){
        if(v[i] == s){
            oc = oc +1;
        }
    }
    if(oc == 0){
        std::cout<<"there is no occurence of "<<s<<"."<<std::endl;
    }
    else{
        std::cout<<"there are "<<oc<<" occurences of "<<s<<" at the following indices: "<<std::endl;
        for (int i=0; i<n; i++){
            if(v[i] == s){
                std::cout<< i <<std::endl;
            }
        }
    }

}