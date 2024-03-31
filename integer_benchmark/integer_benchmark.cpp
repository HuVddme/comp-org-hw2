#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main()
{

    const int exp_billion = 1e9;

    int32_t k = 2;
    int32_t l = 2;
    int32_t result;

    auto start_main = high_resolution_clock::now();
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < exp_billion; j++)
        {
            result = k + l;
        }
    }
}