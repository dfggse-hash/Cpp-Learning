#include <iostream>

using namespace std;


/*
=================================

模板

让代码支持多种类型


STL:

vector

map

都是模板


=================================
*/


template<typename T>


T add(T a,T b)
{

    return a+b;

}



int main()
{


    cout<<add<int>(10,20)
        <<endl;

    cout<<add<double>(1.5,2.5)
        <<endl;

    return 0;

}
