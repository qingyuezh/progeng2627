#include <iostream>
#include <fstream>

int main(){

    std::ifstream gaga;
    gaga.open("input.txt");

    if (gaga.is_open()){
        int tmp;

        gaga >> tmp;
        std::cout<<tmp<<std::endl;


        gaga >> tmp;
        std::cout<<tmp<<std::endl;


        gaga >> tmp;
        std::cout<<tmp<<std::endl;



        gaga >> tmp;
        std::cout<<tmp<<std::endl;

        gaga.close();

    }
    else{
        std::cout<<"error finding file";
    }
}