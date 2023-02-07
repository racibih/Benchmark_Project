/* Requirements:
32-bit Integer operation benchmark (reference time: 100 seconds)
o 1010 additions (of integer constants)
o 5 × 109 multiplication (of integer constants)
o 2 × 109 division (of integer constants)
 64-bit Floating point operation benchmark (reference time: 100 seconds)
o Same as integer, use double precision floating point numbers instead of integer.
 Memory benchmark (reference time: 100 seconds)
o Read from 5 × 109 different array elements, 4 bytes each time
o Write to 5 × 109 different array elements, 4 bytes each time
 Hard drive benchmark 1 (reference time: 250 seconds)
o Read a whole file of 109 bytes, 100 bytes each time
o Write 109 bytes to a file, 100 bytes each time
 Hard drive benchmark 2 (reference time: 10 seconds)
o Read a whole file of 109 bytes, 10000 bytes each time
o Write 109 bytes to a file, 10000 bytes each time

*/
#include <iostream>
#include <cmath>

using namespace std;

int main(){
//32 bit integer operation
//o 1010 additions (of integer constants)
// 5 × 109 multiplication (of integer constants)
// 2 × 109 division (of integer constants)
    int times = pow(10,10);
    int sum =0;
    int a = 0;
    int b = 0;


    return 0;
}