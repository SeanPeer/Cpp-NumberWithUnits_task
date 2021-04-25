#include "doctest.h"
#include "NumberWithUnits.hpp"
#include <iostream>

using namespace std;
using namespace ariel;

TEST_CASE("Basic tests"){

NumberWithUnits t1(500,"m");
NumberWithUnits t2(10,"km");
NumberWithUnits t3(10,"m");

CHECK((t1+t2).getNum() == 10.5);
CHECK(t1 != t2 == false);
CHECK((t2-t1).getNum() == 9.5);
CHECK(t1+t3);
t3+=t1;
CHECK(t3.getUnit == "m");
CHECK(t3.getNum == 510);

CHECK(t1>t2  == false);
CHECK(t1>=t2 == false);
CHECK(t1==t2 == false);
CHECK(t1!=t2 == false);
CHECK(t1<t2 == false);

CHECK(t3>t2 == false);
CHECK(t3>=t2 == false);
CHECK(t3==t2 == false);
CHECK(t3!=t2 == false);
CHECK(t3<t2 == false);



}

