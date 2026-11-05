#include <iostream>
#include <vector>

void filter(const std::vector<double>& v1, int n, std::vector<double>& vout){

    for(int i = 0; i<v1.size(); i++){
        if(v1[i]<n){
            vout.push_back(v1[i]);
        }
    }
}

int main(){
    std::vector<double>vout;
    std::vector<double> v{23,12444,12,45,23.5,2324,44,3456};
    filter(v, 100, vout);
    
    for (int i = 0; i<vout.size(); i++){
        std::cout<<vout[i]<<" "<<std::endl;
    }
}