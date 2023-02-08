#include <iostream>
#include <fstream>
#include <chrono>

using namespace std;

const int bfr_sz = 100;
const int file_sz = 1000000000;  

int main(){
// Start clock 
    auto start = chrono::high_resolution_clock::now();

    // Read file
    char buffer[bfr_sz];
    ifstream file("testfile.bin", ios::binary);

return 0;
}
