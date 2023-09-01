#include <iostream>
#include <Eigen/Dense>
#include "../lib/matplotlibcpp.hpp"

#include <vector>
 
using Eigen::MatrixXd;
namespace plt = matplotlibcpp;
 
int main() {
    MatrixXd m(2,2);
    m(0,0) = 3;
    m(1,0) = 2.5;
    m(0,1) = -1;
    m(1,1) = m(1,0) + m(0,1);
    std::cout << m << std::endl;

    plt::plot(std::vector<int>{5}, std::vector<int>{5}, "o");
    plt::show();
    plt::detail::_interpreter::kill();
}