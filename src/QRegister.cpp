#include "QRegister.h"

QRegister::QRegister(unsigned int length, unsigned int value):_lenght(length) {
    this->_register = Eigen::Vector<bool, Eigen::Dynamic>(2);
    for(unsigned int i = 0; i < length; ++i) {
        this->_register[i] = (length == i+1?1:0);
    }
}