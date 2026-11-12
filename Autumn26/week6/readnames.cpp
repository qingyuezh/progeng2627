#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

int main(){
    std::string muahaha;
    std::cout<<"please enter input file name"<<std::endl;
    std::cin>>muahaha;
    std::ifstream input;
    input.open(muahaha);

    if(!input.is_open()){
        std::cout<<"error finding file";
        return EXIT_FAILURE;
    }
    std::string lulula;
    std::cout<<"please enter output file name"<<std::endl;
    std::cin>>lulula;
    std::ofstream output;
    output.open(lulula);

    std::string tmp;
    std::vector<std::string> v;
    while (input>>tmp){
        v.push_back(tmp);
    }
    output.close();
    
    for (int i = 0 ; i<v.size(); i++){
        output<<v[i]<<" ";
    }
}