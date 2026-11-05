#include <iostream>
#include <vector>

void append(std::vector<double> vin1, std::vector<double> vin2, std::vector<double>& vout){
    for (int i=0; i<vin1.size(); i++){
        vout.push_back(vin1[i]);
    }
    for (int i=0; i<vin2.size(); i++){
        vout.push_back(vin2[i]);
    }
}

int main(){

    std::vector<double> v1{32,435,23,-235.55,235,466};
    std::vector<double>v2{4488,2038,235.2509,44};
    std::vector<double>vout;

    append(v1, v2, vout);

    for (int i=0; i<vout.size(); i++){
        std::cout<<vout[i]<<" "<<std::endl;
    }

}