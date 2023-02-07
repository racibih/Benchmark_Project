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
    //addition
    for(double i = 0; i < pow(10,10);i++){
        result +=0.05;
    }
    //multiplication
    for(double j = 0; j < (5 * pow(10,9));j++){
        result =0.05;
        result*= 0.5;
    }
    //division
    for(double k = 0; k < (2 * pow(10,9));k++){
        result = 500000.5;
        result/=.25;
    }
  auto end = chrono::high_resolution_clock::now();
  auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start).count();

    cout<< "Execution Time:" <<duration<< " nanoseconds"<<endl;
    cout<< "Execution Time: " <<duration/1000000000 << " seconds"<<endl;

    return 0;


}