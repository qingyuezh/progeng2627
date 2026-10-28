#include <iostream>

void calc(int a, int b, int &r, int &m){
    m = a %b;
    r= (a-m)/b;
}

int main(){

    int a,b;
    int r,m;
    bool correct = false;

    calc (18,4,r,m);
    std::cout<<" for a = 18 and b = 4, quotient of a/b is "<<r<<" and remainder is "<<m<<std::endl;
    if(r = 4, m = 2){
        correct = true;
    }
    std::cout<<correct;
    calc (26,3,r,m);
    std::cout<<" for a =  26and b = 3, quotient of a/b is "<<r<<" and remainder is "<<m<<std::endl;
    calc (1357086843,2938557,r,m);
    std::cout<<" for a = 1357086843 and b = 2938557, quotient of a/b is "<<r<<" and remainder is "<<m<<std::endl;
}
