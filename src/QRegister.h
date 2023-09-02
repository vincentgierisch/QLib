#ifndef QREGISTER_H
#define QREGISTER_H

#include <Eigen/Dense>

class QRegister {
    private:
        Eigen::Vector<bool, Eigen::Dynamic> _register;
        unsigned int _lenght;

    public:
        QRegister(unsigned int length, unsigned int value);
        inline friend std::ostream& operator<<(std::ostream& os, const QRegister& qr) {
            os << qr._register;
            return os;
        }
};
#endif