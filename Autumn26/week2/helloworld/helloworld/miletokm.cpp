#include <iostream>

int main(){
    double length_in, length_out;
    std::string unit_in, unit_out;

    const double mile_to_km = 1.609;
    bool valid_unit = true;

    std::cin>>length_in>>unit_in;

    if( (unit_in == "mile")||(unit_in == "miles")){
        length_out = length_in*mile_to_km;
        unit_out = "km";
    }
    else if (unit_in=="km"){
        length_out = length_in/mile_to_km;
        if (length_out == 1){
            unit_out = "mile";
        }
        else{
        unit_out = "miles";
        }
        
    }
    else{
        valid_unit = false;
    }
    if(valid_unit){
        std::cout<<length_out<<unit_out<<std::endl;
    }
    else{
        std::cout<<"unit error"<<std::endl;
    }

}
