#include <iostream>
#include <fstream>
#include <chrono>

using namespace std;
using namespace std::chrono;

const long long TOTAL_BYTES = 1e9;
const int SECTION_SIZE = 10000;

int main() {
    ofstream outputFile("sample.txt", ios::binary);

    char dataSection[SECTION_SIZE];
    for (int i = 0; i < SECTION_SIZE; i++) {
        dataSection[i] = 'x';
    }

    // Measure writing time 
    auto startWrite = high_resolution_clock::now();
    for (long long i = 0; i < TOTAL_BYTES; i += SECTION_SIZE) {
        outputFile.write(dataSection, SECTION_SIZE);
    }
    auto endWrite = high_resolution_clock::now();
    auto writingTime = duration_cast<milliseconds>(endWrite - startWrite).count();

     outputFile.close();

    // Open the file for reading
    ifstream inputFile("sample.txt", ios::binary);

    auto startRead = high_resolution_clock::now();
    for (long long i = 0; i < TOTAL_BYTES; i += SECTION_SIZE) {
        inputFile.read(dataSection, SECTION_SIZE);
    }
    auto endRead = high_resolution_clock::now();

    inputFile.close();

    auto readingTime = duration_cast<milliseconds>(endRead - startRead).count();

    cout << "Total Time: " << (readingTime + writingTime) << "ms" << endl;
}