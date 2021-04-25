#include <iostream>
#include <stdbool.h>

using namespace std;
namespace ariel {

    class NumberWithUnits
    {
    private:
    double _num;
    string _unit;

    public:
        NumberWithUnits(double num,string unit){
            this->_num = num;
            this->_unit = unit;
        }
        double getNum(){
            return this->_num;
        }
        string getUnit(){
            return this->_unit;
        }

        static void read_units(ifstream& input_file);

        NumberWithUnits operator+(const NumberWithUnits& num);
        NumberWithUnits operator+();
        NumberWithUnits operator+= (const NumberWithUnits& num);
        NumberWithUnits operator-(const NumberWithUnits& num);
        NumberWithUnits operator-();
        NumberWithUnits operator-=(const NumberWithUnits& num);
        NumberWithUnits operator++();
        NumberWithUnits operator++(int num);
        NumberWithUnits operator--();
        NumberWithUnits operator--(int num);
        


        friend bool operator>(const NumberWithUnits& num1,const NumberWithUnits& num2);
        friend bool operator>=(const NumberWithUnits& num1,const NumberWithUnits& num2);
        friend bool operator<(const NumberWithUnits& num1,const NumberWithUnits& num2);
        friend bool operator<=(const NumberWithUnits& num1,const NumberWithUnits& num2);
        friend bool operator==(const NumberWithUnits& num1,const NumberWithUnits& num2);
        friend bool operator!=(const NumberWithUnits& num1,const NumberWithUnits& num2);

        friend istream &operator>>(std::istream &input,NumberWithUnits &num);
        friend ostream &operator<<(std::ostream &output,NumberWithUnits const& num);

        friend NumberWithUnits operator*(double num1 ,NumberWithUnits &num2);

    };
    
    
    
}