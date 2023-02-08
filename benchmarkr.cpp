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
   
  //start
    auto start = chrono::high_resolution_clock::now();
    for(int i = 0; i < x;i++){
    char byte1 = arr[i * element_size];
    char byte2 = arr[i * element_size + 1];
    char byte3 = arr[i * element_size + 2];
    char byte4 = arr[i * element_size + 3];
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed_time = end - start;
return 0;
}