#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib> // what is this? 

int search(std::string word, std::vector <std::string> v){
    for (int i = 0; i < v.size(); i ++){
        if (v[i] == word){
            return i;
        }
    }
    return -1; // when to use this? does it work?
}

int main(){
    std::string adfile_name;
    std::cout<<"please enter the name of the ad file: ";
    std::cin>>adfile_name;
    std::ifstream adfile;
    adfile.open(adfile_name);
    std::vector <std::string> adfilev;
    std::string tmp1;
    if (!adfile.is_open()){
        std::cout<<"error finding real meaning file. ";
        return EXIT_FAILURE;
    }
    while (adfile>>tmp1){
        adfilev.push_back(tmp1);
    }

    std::string meanfile_name;
    std::cout<<"please enter the name of the real meaning file: ";
    std::cin>>meanfile_name;
    std::ifstream meanfile;
    meanfile.open(meanfile_name);
    std::vector <std::string> meanfilev;
    std::string tmp2;
    if (!meanfile.is_open()){
        std::cout<<"error finding real meaning file. ";
        return EXIT_FAILURE;
    }
    while (meanfile>>tmp2){
        meanfilev.push_back(tmp2);
    }

    std::vector <std::string> original;
    std::vector <std::string> translation;
    
    for (int i = 0; i < meanfilev.size(); i++){
        if (i % 2 == 0){
            original.push_back(meanfilev[i]);
        }
        else if (i % 2 == 1){
            translation.push_back(meanfilev[i]);
        }
    }

    std::vector <std::string> output_v;
    for (int i = 0; i < adfilev.size(); i++){
        if (search (adfilev[i],original)>=0){
            output_v.push_back(translation[search (adfilev[i],original)]);
        }
        else{
            output_v.push_back(adfilev[i]);
        }
    }

    adfile.close();
    meanfile.close(); //why??

    std::ofstream output;
    output.open("translation_output.txt");
    for (int i = 0; i < output_v.size(); i ++){
        output<<output_v[i]<<" ";
    }
    
    
}