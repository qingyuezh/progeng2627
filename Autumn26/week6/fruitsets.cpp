#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <string>

int search(std::string word, const std::vector<std::string>& vin){
    for (int i = 0; i<vin.size(); i++){
        if (vin[i] == word){
            return i;
        }
    }
    return -1;
}

void intersectv(const std::vector<std::string>& v1, const std::vector<std::string>& v2, std::vector<std::string> &vout){
    for (int i =0 ; i<v1.size(); i++){
        if (search(v1[i], v2)!= -1){
            vout.push_back(v1[search(v1[i], v2)]);
        }
    }
}

void unionv(const std::vector<std::string>& v1, const std::vector<std::string>& v2, std::vector<std::string> &vout){
    for (int i = 0; i<v1.size(); i++){
        vout.push_back(v1[i]);
    }

    for (int i = 0; i<v2.size(); i++){
        if(search(v2[i],v1)==-1){
            vout.push_back(v2[i]);
        }
    }
}

int main(){
    std::ifstream w1;
    std::string input1_name;
    std::cout<<"please enter the name of the first input file"<<std::endl;
    std::cin>>input1_name;
    std::vector<std::string> v1;
    w1.open(input1_name);
    std::ifstream w2;
    std::string input2_name;
    std::cout<<"please enter the name of the second input file"<<std::endl;
    std::cin>>input2_name;
    w2.open(input2_name);
    std::string tmp1, tmp2;
    std::vector<std::string> v2;
    while (w1>>tmp1){
        v1.push_back(tmp1);
    }
    while (w2>>tmp2){
        v2.push_back(tmp2);
    }

    std::vector<std::string> vunion;
    std::vector<std::string> vintersect;

    unionv(v1, v2, vunion);
    intersectv(v1, v2, vintersect);

    for (int i = 0; i<vintersect.size(); i++){
        std::cout<<vintersect[i]<<std::endl;
    }
    

    std::ofstream unionv;
    unionv.open("union.txt");
    for (int i = 0; i<vunion.size(); i++){
        unionv<<vunion[i]<<std::endl;
    }

    std::ofstream intersectv;
    intersectv.open("intersection.txt");
    for (int i = 0; i<vintersect.size(); i++){
        intersectv<<vintersect[i]<<std::endl;
    }

}

