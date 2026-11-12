#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

void occur(const std::vector<std::string> &infile, const std::vector<std::string> &words, std::vector<int> &vout){
    
    for (int w=0; w<words.size(); w++){
        int occ=0;
        for (int i=0; i<infile.size(); i++){
            if(words[w]==infile[i]){
                occ++;
            }
        }
        vout.push_back(occ);
    }
}

int main(){

    std::vector<int> vout;

    std::ifstream infile;
    std::string infile_name;
    std::cout<<"please enter name of text file: ";
    std::cin>>infile_name;
    infile.open(infile_name);
    std::vector<std::string> infilev;
    std::string tmp1;

    if(!infile.is_open()){
        std::cout<<"error finding input text file.";
    }

    while(infile>>tmp1){
        infilev.push_back(tmp1);
    }

    std::ifstream words;
    std::string words_name;
    std::cout<<"please enter name of word file: ";
    std::cin>>words_name;
    words.open(words_name);
    std::vector<std::string> wordsv;
    std::string tmp2;

    if(!words.is_open()){
        std::cout<<"error finding input text file.";
    }
    
    while(words>>tmp2){
        wordsv.push_back(tmp2);
    }

    std::ofstream output;
    std::string output_name;
    std::cout<<"please enter the name of the output file: ";
    std::cin>> output_name;
    output.open(output_name);

    occur(infilev, wordsv, vout);
    infile.close();
    words.close();

    
    for (int i=0; i<vout.size(); i++){
        output<<wordsv[i]<<": "<<vout[i]<<std::endl;
    }
    
}