#include <iostream>
#include <fstream>
#include <chrono>

using namespace std;

const int bfr_sz = 10000;
const int file_sz = 1000000000;  

int main(){
// Start clock 
    auto start = chrono::high_resolution_clock::now();

    // Read file
    char buffer[bfr_sz];
    ifstream file("testfile.bin", ios::binary);
    int count = 0;
    while (count < file_sz) {
        file.read(buffer, bfr_sz);
        count += file.gcount();
    }

    // Write file
    ofstream outfile("testfile.bin", ios::binary);
    int wcount = 0;
    while (wcount < file_sz) {
        outfile.write(buffer, bfr_sz);
        wcount += bfr_sz;
    }
auto stop = chrono::high_resolution_clock::now();
auto duration = chrono::duration_cast<chrono::nanoseconds>(stop - start);

cout << "Execution time: "<< duration.count() << "seconds" << endl;
return 0;
}
