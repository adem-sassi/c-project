
#include <iostream>
#include <cmath>

using namespace std;
struct dualNumber {
    double real; 
    double dual; 
    dualNumber(double r = 0.0, double d = 0.0) : real(r), dual(d) {}
    dualNumber operator+(const dualNumber& n) const {
        return dualNumber(real + n.real, dual + n.dual);
    }
    dualNumber operator-(const dualNumber& n)const {
        return dualNumber(real - n.real, dual - n.dual);
    }
    dualNumber operator*(const dualNumber& n )const{
        return(real * n.real, dual * n.dual );
    }
};
int  main() {
   dualNumber x = {2,5}; 
    dualNumber y = {2,5};

    std::cout << x + y << std::endl;
}

