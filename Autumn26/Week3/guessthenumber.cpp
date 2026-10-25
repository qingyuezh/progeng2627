#include <iostream>

int main(){

    int Rlow, Rhigh, guess;
    std::string feedback;
    bool final = false;
    
    std::cout<<"Lower range: "<<std::endl;
    std::cin>>Rlow;
    std::cout<<"Higher range:"<<std::endl;
    std::cin>>Rhigh;
    
    guess = (Rhigh - Rlow)/2;

    std::cout<<"the first guess is: "<<guess<<std::endl;
    std::cout<<"is this correct? answer yes or higher/lower if no."<<std::endl;
    std::cin>>feedback;

    if (feedback == "yes"){
        final = true;
    }

    while (final != true){
        if(feedback == "higher"){
            Rlow = guess;
            guess = (Rhigh + guess) / 2;
            std::cout<<"my guess is: "<<guess<<std::endl;
            std::cout<<"is this correct? answer yes or higher/lower if no."<<std::endl;
            std::cin>>feedback;
            if (feedback == "yes"){
                final = true;
            }
        }
        else if (feedback == "lower"){
            Rhigh = guess;
            guess = (guess + Rlow) / 2;
            std::cout<<"my guess is: "<<guess<<std::endl;
            std::cout<<"is this correct? answer yes or higher/lower if no."<<std::endl;
            std::cin>>feedback;
            if (feedback == "yes"){
                final = true;
            }
        }
    }

    if (final == true){
        std::cout<<"yay! the answer is "<<guess<<" and I got it right!"<<std::endl;
    }





}