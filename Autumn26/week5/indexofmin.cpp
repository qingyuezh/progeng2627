#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double> vin){
     if (vin.size() == 0){
            return -1;
        }
    double mindex= 0, min = vin[0];
   
    for (int i = 0; i < vin.size(); i++){
        if(vin[i]<min){
            min = vin [i];
            mindex = i;
        }
        
    }
    return mindex;   
}

int main(){

    std::vector<double>v1 {2,-2,3};
    std::cout<<(min_vector_element(v1) - 1)<<std::endl;
    std::vector<double>v2 {1,-1939,3};
    std::cout<<(min_vector_element(v2) - 1)<<std::endl;
    std::vector<double>v3 {39485,23,3};
    std::cout<<(min_vector_element(v3) - 2)<<std::endl;
    std::vector<double>v4;
    std::cout<<(min_vector_element(v4) - (-1))<<std::endl;
}