#include "./exp.hpp"

int main () {
    std::vector<int> arg {1, 5, 10, 15, 20, 25,
                          -1, -5, -10, -15, -20, -25};

    for(const auto& elem : arg) {
        std::cout << "Res<double> = " << exp_calc<double>(elem) << ", Arg = " << elem << std::endl;
    }
    std::cout << "\n\n\n";
    for(const auto& elem : arg) {
        std::cout << "Res<float> = " << exp_calc<float>(elem) << ", Arg = " << elem << std::endl;
    }
}
