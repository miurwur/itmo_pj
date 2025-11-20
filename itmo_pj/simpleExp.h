#pragma once

#include <cassert>
#include <iostream>
#include <string>
#include <ranges>
#include <unordered_map>
#include <algorithm>

namespace Labs
{
    class ComplexNumber {
    public:
        ComplexNumber(double re, double im) : re_(re), im_(im) {}

        double re() const;
        double im() const;
        double abs() const;
        ComplexNumber pow(unsigned n) const;

        ComplexNumber operator*(const ComplexNumber& other) const;
        ComplexNumber operator+(const ComplexNumber& other) const;
        bool operator==(const ComplexNumber& other) const;

    private:
        double re_{};
        double im_{};
    };

    using BasePolynom = std::vector<ComplexNumber>;
    class Polynom : BasePolynom
    {
    public:

        Polynom(BasePolynom content) {
            *this = *static_cast<Polynom*>(&content);
        };

        ComplexNumber at(const ComplexNumber& x) const;
    };

    namespace Tests
    {
        void complexNumber();
        void polynom();
    }
}