#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

int main(){
    std::ifstream input;
    input.open("fox.txt");
    std::ofstream output;
    output.open("bear.txt");
    
    if(!output.is_open()){
        std::cout<<"error open file";
        return EXIT_FAILURE;
    }

    std::vector <std::string> v;
    std::string tmp;
    while (input>>tmp){
        v.push_back(tmp);
    }

    input.close();

    for (int i = 0; i<v.size();i++){
        output<<v[i]<<" ";
    }
}