#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <cmath> 

namespace homework {

	void problem1(); // зажимаем ctrl и наводим на функцию
	void problem2(); // можно зажать в самом файле с функциями
	void problem3();
	void problem4();
}


namespace Labs
{	
	class ComplexNumber{	
	public:
		ComplexNumber(double re, double im) : re_(re), im_(im) {} // перенесли конструктор в заголовочный файл 

		double re() const { return re_; }
		double im() const { return im_; }
		double abs() const { return sqrt(im_ * im_ + re_ * re_); }

		ComplexNumber operator+(const ComplexNumber& other) const {
			return ComplexNumber(re_ + other.re_, im_ + other.im_);
		}
	private:
		
		double re_;
		double im_;
	};
}