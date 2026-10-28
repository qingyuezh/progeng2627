#include <iostream>
#include <string>

void swap(std::string & a, std::string &b){

    std::string temp;
    temp = a;
    a = b;
    b = temp;

}

std::string w1, w2;

int main(){
    std::cout<<"please enter two words:"<<std::endl;
    std::cin>>w1>>w2;
    std::cout<<"you have entered:"<<std::endl;
    std::cout<<"word1: "<<w1<<std::endl;
    std::cout<<"word2: "<<w2<<std::endl;

    swap(w1, w2);

    std::cout<<"after swapping:"<<std::endl;
    std::cout<<"word1: "<<w1<<std::endl;
    std::cout<<"word2: "<<w2<<std::endl;
}