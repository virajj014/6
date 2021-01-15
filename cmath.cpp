#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout<< sqrt(64)<<"\n";
    cout<< log(2)<<"\n";

    cout<< cbrt(64)<<"\n";  //	Returns the cube root of x    
    cout<< abs(-6.754354366)<<"\n";  //	Returns the positive absolute value of  x , MOD
    cout<< fabs(-6.767867867)<<"\n";//	Returns the absolute value of a floating x , MOD   
    cout<< exp(2)<<"\n";	//	Returns the value of e^x
    cout<< expm1(2)<<"\n";	//	Returns e^x -1
    cout<< hypot(3, 4)<<"\n"<<"\n";	//	Returns sqrt(x2 +y2) without intermediate overflow or underflow

}