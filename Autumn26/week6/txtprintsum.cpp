#include <iostream>
#include <fstream>

int main(){
    std::ifstream hohoho;
    hohoho.open("input.txt");

    if (hohoho.is_open()){
        int tmp, sum=0;
        while (hohoho>>tmp){
            sum = sum + tmp;
        }

        hohoho.close();
        std::cout<<sum;
    }
    else{
        std::cout<<"error opening file";
    }
}