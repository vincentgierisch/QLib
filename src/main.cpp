#include <iostream>
#include <Eigen/Dense>

#include "QRegister.h"

#include "../lib/matplotlibcpp.hpp"

#include <vector>

namespace plt = matplotlibcpp;
 
int main() {
    QRegister qr(2, 3);

    std::cout << qr << std::endl;

    plt::plot(std::vector<int>{5}, std::vector<int>{5}, "o");
    plt::show();
    plt::detail::_interpreter::kill();
}