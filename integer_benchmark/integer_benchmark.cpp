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

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < exp_billion; j++)
            result = k * l;
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < exp_billion; j++)
        {
            result = l / k;
        }
    }

    auto stop_main = high_resolution_clock::now();
    auto final_time = duration_cast<milliseconds>(stop_main - start_main).count();
    cout << "Time: " << final_time << "ms" << endl;


    return 0;
}