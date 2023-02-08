#include <iostream>
#include <cmath>
#include <chrono>
using namespace std;
/*Memory benchmark (reference time: 100 seconds)
o Read from 5 × 10^9 different array elements, 4 bytes each time
o Write to 5 × 10^9 different array elements, 4 bytes each time*/
const int x = (unsigned) 5e9;
const int element_size = 4; // adjust the size to include 4 bytes per element

int main(){
    char*arr = new char[x*element_size];
    fill(arr, arr + x*element_size, 0);

return 0;
}