
#include <iostream>
#include <cmath>

/* SUGGESTION:
 * The code does not compile
 * A lot of overloads are missing:
 * * operator+(dualNumber, double)
 * * operator+(double, dualNumber)
 * * operator-(dualNumber, double)
 * * operator-(double, dualNumber)
 * * operator*(dualNumber, dualNumber)
 * * operator*(dualNumber, double)
 * * operator*(double, dualNumber)
 * * operator/(dualNumber, dualNumber)
 * * operator/(dualNumber, double)
 * * operator/(double, dualNumber)
 * * operator<<(std::ostream& os, const DualNumber& n)
 * Avoid using `using namespace std;`
 * Comment your code.
 *
 */
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
        return(real * n.real, dual * n.dual ); /* SUGGESTION: That is not the correct expression nor syntax. */
    }
};
int  main() {
   dualNumber x = {2,5}; 
    dualNumber y = {2,5};

    std::cout << x + y << std::endl;
}

