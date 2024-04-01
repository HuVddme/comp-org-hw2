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
}