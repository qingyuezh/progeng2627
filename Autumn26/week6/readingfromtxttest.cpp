#include <iostream>
#include <fstream>

int main(){
    std::ifstream gugugaga;
    gugugaga.open("input.txt");

    if (gugugaga.is_open()){
        int tmp;

        while (gugugaga>>tmp){
            std::cout<<tmp<<std::endl;
        }
        gugugaga.close();
    }
    else{
        std::cout<<"error locating file"<<std::endl;
    }

}