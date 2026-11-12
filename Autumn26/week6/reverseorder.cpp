#include <iostream>
#include <vector>
#include <fstream>

int main(){
    std::ifstream grrrh;
    std::vector<double> v;
    grrrh.open("input.txt");

    if (!grrrh.is_open()){
        std::cout<<"error open file";
        return EXIT_FAILURE;
    }

    int tmp;
    while(grrrh>>tmp){
        v.push_back(tmp);
    }
    for (int i = v.size()-1; i>= 0 ; i--){
        std::cout<<v[i]<<std::endl;
    }

}