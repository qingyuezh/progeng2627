#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>vin){
    for (int i = 0; i< vin.size(); i++){
        if(vin[i] == n){
            return i;
        }
    }
    return -1;
}

int main(){

    std::vector<int>v1{3,4,5,6,7};
    std::cout<<(search_vector(4,v1)-1)<<std::endl;
    std::vector<int>v2{3,4,34625,3458,222215,6};
    std::cout<<(search_vector(6,v2)-5)<<std::endl;
    std::vector<int>v3{1,4,5,6,7};
    std::cout<<(search_vector(1,v3)-0)<<std::endl;
}