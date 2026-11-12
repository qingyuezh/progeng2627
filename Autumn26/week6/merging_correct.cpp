#include <iostream>
#include <vector>


void merge(const std::vector<int> &v1, const std::vector<int> &v2, std::vector<int> &vout){
    int a=0, b=0;
    
    while(a<v1.size() && b<v2.size()){
        if(v1[a]==v2[b]){
            vout.push_back(v1[a]);
            vout.push_back(v2[b]);
            a=a+1;
            b=b+1;
        }
        else if (v1[a]<v2[b]){
            vout.push_back(v1[a]);
            a=a+1;
        }
        else if (v2[b]<v1[a]){
            vout.push_back(v2[b]);
            b=b+1;
        }
        
    }

    while (a<v1.size()){
        vout.push_back(v1[a]);
        a=a+1;
    }

    while (b<v2.size()){
        vout.push_back(v2[b]);
        b=b+1;
    }
    
}

int main(){
    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> vout;

    std::vector<int> expected;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected = {1, 3, 4, 5, 6, 6, 10};

  
    merge(v1, v2, vout);
    for(int i=0; i<vout.size(); i++){
        std::cout<<vout[i]<<" ";
    }
    
    
    


}