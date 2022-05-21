#include <iostream>
#include <fstream>
#include <cmath>

int main(){

    std::ofstream output("output.dat");

    float x;
    float y;
    float z;
    float angle;

    while(std::cin){
        std::cin >> x;
        std::cin >> y;
        std::cin >> z;

        angle = 2 * sin(x) * sin(y) + cos(z);
        output << angle << '\n';
    }

    output.close();

    std::cout << "Complete!" << std::endl;

    return 0;
}
