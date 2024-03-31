#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
    
    const long long size_array = 5000000000;
  
    int* array_data = new int[size_array]; 
    int temp_data;

    auto start_main = high_resolution_clock::now();

    for (long long i = 0; i < size_array; i++) {
        temp_data = array_data[i];
    }

    for (long long i = 0; i < size_array; i++) {
        array_data[i] = 1;
    }
}