#include <iostream>
#include <fstream>

int main(){
    std::ifstream heehee;
    heehee.open("txt.txt");

    if(!heehee.is_open()){
        std::cout<<"error open file";
        return EXIT_FAILURE;
    }
    int tmp;
    while (heehee>>tmp){
        std::cout<<tmp<<std::endl;
    }
}