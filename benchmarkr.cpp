#include <iostream>
#include <cmath>
#include <chrono>
using namespace std;
/*Memory benchmark (reference time: 100 seconds)
o Read from 5 × 10^9 different array elements, 4 bytes each time
o Write to 5 × 10^9 different array elements, 4 bytes each time*/
int main(){
const int x = (unsigned) 5e9;
const int element_size = 4; // adjust the size to include 4 bytes per element


return 0;
}