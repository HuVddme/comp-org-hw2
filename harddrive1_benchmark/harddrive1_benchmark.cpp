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

    auto endWrite = high_resolution_clock::now();
    auto writingTime = duration_cast<milliseconds>(endWrite - startWrite).count();

    outputFile.close();

    // Open input file stream
    ifstream inputFile("sample.txt", ios::binary);

    // Measure reading time
    auto startRead = high_resolution_clock::now();
    for (long long i = 0; i < totalBytes; i += sectSize) {
        inputFile.read(buffer, sectSize);
    }
    auto endRead = high_resolution_clock::now();

    inputFile.close();

    auto readingTime = duration_cast<milliseconds>(endRead - startRead).count();

    // Output total time
    cout << "Time: " << (readingTime + writingTime) << "ms" << endl;
}