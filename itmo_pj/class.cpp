#include "simpleExp.h"

using namespace std;

namespace Labs
{
    // реализация ComplexNumber
    double ComplexNumber::re() const {
        return re_;
    }

    double ComplexNumber::im() const {
        return im_;
    }

    double ComplexNumber::abs() const {
        return std::sqrt(im_ * im_ + re_ * re_);
    }

    ComplexNumber ComplexNumber::operator*(const ComplexNumber& other) const {
        return {
            re_ * other.re() - im_ * other.im(),
            re_ * other.im() + other.re() * im_
        };
    }

    ComplexNumber ComplexNumber::pow(unsigned n) const {
        if (n == 0)
            return { 1, 0 };
        if (n == 1)
            return { re_, im_ };
        return *this * pow(n - 1);
    }

    ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) const {
        return { re_ + other.re(), im_ + other.im() };
    }

    bool ComplexNumber::operator==(const ComplexNumber& other) const {
        return re_ == other.re() && im_ == other.im_;
    }


    ComplexNumber Polynom::at(const ComplexNumber& x) const {
        ComplexNumber result(0, 0);
        // получим базовый многочлен
        auto basePoly = BasePolynom(*this);
        // пройдем по коэффицентам
        for (size_t index = 0; index < basePoly.size(); ++index) {
            auto& coef = basePoly[index]; // ссылка на коэффициент
            // прибавляем к результату свойство полинома: x^index * коэффициент
            result = result + x.pow(index) * coef;
        }
        return result;
    }

    namespace Tests
    {
        void complexNumber() {
            auto imaginary = ComplexNumber(0, 1);
            auto real = ComplexNumber(2, 0);
            assert(imaginary + real == ComplexNumber(2, 1));
            assert(real.pow(5) == ComplexNumber(32, 0));
        }

        void polynom() {
            auto poly = Polynom({ ComplexNumber(0, 10), ComplexNumber(0, 1) });
            // проверка значения в нуле
            if (poly.at(ComplexNumber(0, 0)) == ComplexNumber(0, 10)) {
                cout << "polynom(): Correct at zero\n";
            }
            else {
                cout << "polynom(): Error at zero\n";
            }
            // проверка значения в 1
            if (poly.at(ComplexNumber(1, 0)) == ComplexNumber(0, 11)) {
                cout << "polynom(): Correct at one\n";
            }
            else {
                cout << "polynom(): Error at one\n";
            }
        }
    }
}

//int main() {
//    Labs::Tests::complexNumber();
//    Labs::Tests::polynom();
//
//    system("pause");
//}