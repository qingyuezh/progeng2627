#include <iostream>

double mypow(double base, int exp){

    double result = 1.0;

    for (int i=0; i<std::abs(exp); i++){
            result = result*base;
    }
    
    if(exp>=0){
        return result;
    }
    else{
        return 1/result;
    }
}

double sumpow(double x, int n){
    
    double exp; 
    double c=0;
    double m;


    if(n>=0){
        for(int i=1; i<n+1; i++){
            exp = mypow(x,i);
            c = c + exp;
        }
    }

    else{
        m = -n;
        for(int i=1; i<m+1; i++){
            exp = mypow(x,0-i);
            c = c + exp;
        }
    }
    return c;
}

int main(){

    std::cout<<(sumpow(2,3) == 14);

}