#include <iostream>
#include <vector>
#include <fstream>

int main(){
    std::ifstream hallo;
    hallo.open("fox.txt");

    if(!hallo.is_open()){
        std::cout<<"error open file";
        return EXIT_FAILURE;
    }

    std::string word;
    std::vector <std::string> v;
    while (hallo>>word){
        v.push_back(word);
    }

    for (int i=v.size()-1; i>=0; i--){
        std::cout<<v[i]<<std::endl;
    }
}