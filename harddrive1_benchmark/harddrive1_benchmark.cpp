#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;
using namespace std::chrono;

const long long totalBytes = 1e9;
const int sectSize = 100;

int main() {
    ofstream outputFile("sample.txt", ios::binary);

    char buffer[sectSize];
    for (int i = 0; i < sectSize; i++) {
        buffer[i] = 'x';
    
    }

    // Measure writing time
    auto startWrite = high_resolution_clock::now();
    for (long long i = 0; i < totalBytes; i += sectSize) {
        outputFile.write(buffer, sectSize);
    }

}