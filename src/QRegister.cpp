#include "QRegister.h"

QRegister::QRegister(unsigned int length, unsigned int value):_lenght(length) {
    unsigned int lengthOfRegister = pow(2, length);
    this->_register = Eigen::Vector<bool, Eigen::Dynamic>(lengthOfRegister);
    assert(value < lengthOfRegister);
    for(unsigned int i = 0; i < lengthOfRegister; ++i) {
        this->_register[i] = (value == i?1:0);
    }
}