#include <iostream>
#include <cmath>

using namespace std;
int main(){
    cout<< fabs(-6.767867867)<<"\n";//	Returns the absolute value of a floating x , MOD  
    cout<< fdim(2, 3)<<"\n";	//	Returns x-y if x>y else returns 0
    cout<< fma(2, 3, 4)<<"\n";	//	Returns x*y+z
    cout<< fmax(3.45, 3.44)<<"\n";	//	Returns the highest value of a floating x and y
    cout<< fmin(3.45, 3.44)<<"\n";	//	Returns the lowest value of a floating x and y
    cout<< fmod(8.5, 1.6)<<"\n";	//	Returns the floating point remainder of x/y
    cout<< pow(2, 3)<<"\n";	//	Returns the value of x to the power of y          
}