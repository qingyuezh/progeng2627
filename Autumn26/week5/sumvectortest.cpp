#include <iostream>
#include <vector>

double sum_vectors(const std::vector<double>& vin){
    double sum=0 ;
    for (int i=0; i<vin.size(); i++){
        sum = sum + vin[i];
    }
    return sum;
}

int main(){
    std::vector<double>v;
    int n, t;
    std::cout<<"how many items in total?"<<std::endl;
    std::cin>>n;

    for (int i=0; i<n ; i++){
        std::cin>>t;
        v.push_back(t);
    }

    std::cout<<sum_vectors(v);

}