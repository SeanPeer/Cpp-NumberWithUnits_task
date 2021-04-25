#include<iostream>
#include "NumberWithUnits.hpp"

namespace ariel{

    void ariel::NumberWithUnits::read_units(ifstream& inputfile){}

    NumberWithUnits NumberWithUnits::operator+(const NumberWithUnits& num){
        NumberWithUnits check(15,"km");
        return check;
    }
    NumberWithUnits NumberWithUnits::operator+(){
        NumberWithUnits check(10,"km");
        return check;
    }
    NumberWithUnits NumberWithUnits::operator+= (const NumberWithUnits& num){
        return *this;
    }
    NumberWithUnits NumberWithUnits::operator-(const NumberWithUnits& num){
        NumberWithUnits check(15,"km");
        return check;
    }
    NumberWithUnits NumberWithUnits::operator-(){
        NumberWithUnits check(15,"km");
        return check;
    }
    NumberWithUnits NumberWithUnits::operator-=(const NumberWithUnits& num){
        return num;
    }
    NumberWithUnits NumberWithUnits::operator++(){
        return *this;
    }
    NumberWithUnits NumberWithUnits::operator++(int num){
        NumberWithUnits check(15,"km");
        return check;
    }
    NumberWithUnits NumberWithUnits::operator--(){
        return *this;
    }
    NumberWithUnits NumberWithUnits::operator--(int num){
        NumberWithUnits check(15,"km");
        return check;
    }
    NumberWithUnits operator*(double num1 ,NumberWithUnits &num2){
        NumberWithUnits check(15,"km");
        return check;
    }
        

    bool operator>(const NumberWithUnits& num1,const NumberWithUnits& num2){return false;}
    bool operator>=(const NumberWithUnits& num1,const NumberWithUnits& num2){return false;}
    bool operator<(const NumberWithUnits& num1,const NumberWithUnits& num2){return false;}
    bool operator<=(const NumberWithUnits& num1,const NumberWithUnits& num2){return false;}
    bool operator==(const NumberWithUnits& num1,const NumberWithUnits& num2){return false;}
    bool operator!=(const NumberWithUnits& num1,const NumberWithUnits& num2){return false;}

    std::istream &operator>>(istream &input,NumberWithUnits &num){
        int test = 0;
        return (input >> test);
    }
    ostream &operator<<(ostream &output,NumberWithUnits const& num){
        output << num._num << "["<<num._unit<<"]";
        return output;
    }

    
    
}