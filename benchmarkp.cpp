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
test
*/
#include <iostream>
#include <cmath>
#include <chrono>

using namespace std;
int addition_op();
int multiplication_op();
int division_op();

int main(){
//32 bit integer operation
//o 1010 additions (of integer constants)
// 5 × 109 multiplication (of integer constants)
// 2 × 109 division (of integer constants)
    double referencetime = (unsigned)100 * 1000000000; //100 seconds converted to nano
        auto start = chrono::high_resolution_clock::now();

    int sum =0;
    int product=0;
    int total=0;
    sum = addition_op();
    product = multiplication_op();
    total = division_op();
        auto end = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start).count();

   cout<< "Division Time Taken: " <<add_duration.count()<< " nanoseconds"<<endl;

    return 0;
}

int addition_op(){
    double times = (unsigned) pow(10,10);
    int sum = 0;
     for (int i=0; i < times; i++){
        sum+=1;

    }
  return sum;
}
int multiplication_op(){
    double times = (unsigned) 5* pow(10,9);
    int total = 1;
    
     for (int i=0; i < times; i++){
        total*=2;
    }
   
  return total;
}
int division_op(){
    double times = (unsigned) 2* pow(10,10);
    int result = 444;
   
    int result = 0;
     for (int i=0; i < times; i++){
        result /= 2;
       

    }
   return result;
}
