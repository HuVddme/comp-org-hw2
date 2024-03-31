#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main(){
    double test_number;
    auto begin = high_resolution_clock::now();

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 1000000000; j++)
        {
            test_number = 1.5 + 2.5;
        }
    }

     for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 1000000000; j++)
            test_number = 1.5 * 2.5;
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 1000000000; j++)
        {
            test_number = 2.5 / 1.5;
        }
    }

    auto end = high_resolution_clock::now();
    auto benchmark_time = duration_cast<milliseconds>(end - begin).count();
    cout << "Time: " << benchmark_time << "ms" << endl;


}