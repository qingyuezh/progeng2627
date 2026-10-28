#include <iostream>

bool leap_year(int year){
    bool ly = false;
    if (year%4 == 0){
        if (year%100 == 0){
            if (year % 400 == 0){
                ly = true;
            }
        }
        else{
            ly = true;
        }
    }
    return ly;
}


void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){

    if (m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12){
        if (d1<31){ //days that are not 31st
            d2 = d1 +1;
            m2 = m1;
            y2 = y1;
        }
        else{
            if(m1 == 12){ //last day of the year
                y2 = y1 +1;
                m2 = 1;
                d2 = 1;
            }
            else if (0<m1 && m1<12){ //31st of the month except dec
                y2 = y1;
                m2 = m1+1;
                d2 = 1;
            }
        }
    }
    else if (m1  == 4 || m1 == 6 || m1 == 9 || m1 == 11){
        if (d1<30){ //days that are not 30th
            d2 = d1 +1;
            m2 = m1;
            y2 = y1;
        }
        else if (d1 == 30){ //30st of the month except dec
            y2 = y1;
            m2 = m1+1;
            d2 = 1;
        }
    }
    else if (m1 == 2){
        if (leap_year(y1)){
            if (d1<29){ //days that are not 30th
                d2 = d1 +1;
                m2 = m1;
                y2 = y1;
            }
            else{ //30st of the month except dec
                y2 = y1;
                m2 = m1+1;
                d2 = 1;
            }
        }
        else if (leap_year(y1) != 1){
            if (d1<28){ //days that are not 30th
                d2 = d1 +1;
                m2 = m1;
                y2 = y1;
            }
            else if (d1 == 28){ //30st of the month except dec
                y2 = y1;
                m2 = m1+1;
                d2 = 1;
            }
            else if (d1 == 29){
                y2 = 00;
                m2 = 00;
                d2 = 00;
            }
        }
    }


    
    // TODO: d1, m1, y1 are inputs 
    // corresponding to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2 
    // which is meant to be the day after d1/m1/y1

    // function leap_year is useful for this task

    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task

    // (this function should not print anything)

}

int main(){
        int di,mi,yi,d,m,y;
        std::cin>>di>>mi>>yi;
        next_date (di,mi,yi,d,m,y);
        std::cout<<"next date of "<<di<<"-"<<mi<<"-"<<yi<<" is "<<d<<"-"<<m<<"-"<<y<<std::endl;
}

int main(){
    int di,mi,yi,d,m,y;
    std::cout<<(next_date(28,2,2021,d,m,y) == 1-3-2021)
}