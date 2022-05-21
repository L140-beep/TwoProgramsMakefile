#define _USE_MATH_DEFINES

#include <iostream>
#include <fstream>
#include <cmath>

int main(int argc, char* argv[]){
    if (argc != 3){
        throw "Invalid arguments";
    }

    int N = atoi(argv[1]);
    std::ofstream output(argv[2]);

    for (int i = 0; i < N; i++)
    {
        float data1 = (std::rand() % int(2 * M_PI * 1000) - M_PI * 1000) / 1000;
        float data2 = (std::rand() % int(2 * M_PI * 1000) - M_PI * 1000) / 1000;
        float data3 = (std::rand() % int(2 * M_PI * 1000) - M_PI * 1000) / 1000;
        output << data1 << ' ' << data2 << ' ' << data3 << '\n';
    }

    output.close();
    return 0;
}
