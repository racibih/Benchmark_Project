#include <iostream>
#include <cmath>
#include <chrono>
using namespace std;
//64 bit Floating point operation benchmark
//o 1010 additions (of double precision floating point numbers)
// 5 × 109 multiplication (of double precision floating point numbers)
// 2 × 109 division (of double precision floating point numbers)
int main(){
  auto start = chrono::high_resolution_clock::now();
    double result = 0.0;
    for(int i = 0; i < pow(10,10);i++){
        result +=0.05;
    }

}