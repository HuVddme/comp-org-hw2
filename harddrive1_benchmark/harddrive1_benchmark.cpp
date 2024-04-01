#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;
using namespace std::chrono;

const long long total_bytes = 1e9;
const int sect_size = 100;

int main() {
    ofstream outFile("sample.txt", ios::binary);

    char buffer[sect_size];
    for (int i = 0; i < sect_size; i++) {
        buffer[i] = 'x';
    
    }

}