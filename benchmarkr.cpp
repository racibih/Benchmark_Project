#include <iostream>
#include <cmath>
#include <chrono>
using namespace std;
/*Memory benchmark (reference time: 100 seconds)
o Read from 5 × 10^9 different array elements, 4 bytes each time
o Write to 5 × 10^9 different array elements, 4 bytes each time*/
const int x =  5e9;
const int element_size = 4; // adjust the size to include 4 bytes per element

int main(){
    char *arr = new char[x*element_size];
    //filling array
      for (int i = 0; i < x * element_size; i++) {
    arr[i] = i % 256; //ascii character
  }
  //start
    auto start = chrono::high_resolution_clock::now();


return 0;
}