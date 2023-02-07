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
#include <chrono>

using namespace std;
chrono::nanoseconds additions(int);
int main(){
//32 bit integer operation
//o 1010 additions (of integer constants)
// 5 × 109 multiplication (of integer constants)
// 2 × 109 division (of integer constants)
    int referencetime = 100 * 1000000000; //100 seconds converted to nano

   
    auto op1_duration = additions(referencetime);
    cout<< "Time Taken: " <<op1_duration.count()<< " nanoseconds"<<endl;
    return 0;
}

chrono::nanoseconds additions(int referencetime){
    auto start = std::chrono::high_resolution_clock::now();
    int times = pow(10,10);
    int sum = 0;
     for (int i=0; i < times; i++){
        sum+=i;
        auto end = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::nanoseconds>(end-start);
        if(duration.count() > referencetime){
            break;
        }

    }
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start);
  return duration;
}
