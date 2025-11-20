#include <iostream>
#include <string>
#include <vector>
#include <cmath> 

#include "simpleExp.h"

using namespace std;

namespace homework
{
	// Вводится натуральное число N а затем N
	// целых чисел последовательности.Найдите количество минимальных элементов в последовательности.

	void problem1()
	{
		int N;
		cout << "N: ";
		cin >> N;
		vector<int> nums(N);
		cout << "Number of your elements: " << N << "\n";
		for (int i = 0; i < N; i++)
		{
			cin >> nums[i];
		}
		int minimum = nums[0];
		int counter = 0;
		for (int i = 0; i < N; i++)
		{
			if (nums[i] == minimum) {
				counter++;
			}
		}
		cout << "number of minimal elements = "  << counter << endl;
	}

	// fibonacci
	void problem2()
	{	
		int A;
		cout << "A: ";
		cin >> A;
		int fib_1 = 1; int fib_2 = 1;
		int flag = 0;
		if (A == fib_1) { cout << "fibonacci index: 1" << endl; flag = 1; }
		for (int i = 3;; i++)
		{	
			int fib = fib_1 + fib_2;
			if (fib == A) { cout << "fibonacci index: " << i << endl; break; }
			else if (fib > A and not flag)
			{
				cout << -1 << endl; break; 
			}
			fib_1 = fib_2;
			fib_2 = fib;
		}
	}

	// max number multiplied by 7
	void problem3()
	{
		int a; int b;
		int flag = 0;
		cout << "a: "; cin >> a;
		cout << "b: "; cin >> b;
		int size = b - a + 1;
		
		vector<int> nums(size);
		for (int i = 0; i < size; i++)
		{
			nums[i] = a + i;
		}
		for (int i = size - 1; i >= 0; i--)
		{
			if (nums[i] % 7 == 0) { flag = 1;  cout << nums[i] << endl; break; }
		}
		if (flag == 0) { cout << -1 << endl; }
	}

	// DNA
	void problem4()
	{
		string dna;
		cout << "dna: "; cin >> dna;
		for (int i = 0; i < dna.length(); ++i)
		{
			switch (dna[i]) 
			{
			case 'A': dna[i] = 'T'; break;
			case 'T': dna[i] = 'A'; break;
			case 'C': dna[i] = 'G'; break;
			case 'G': dna[i] = 'C'; break;
			default:
				break;
			}
		}
		cout << dna << endl;
	}

	// По данному числу N распечатайте все целые значения степени двойки, не превосходящие N, в порядке возрастания.
	#include <math.h>
	void problem5()
	{
		int N; 
		cout << "N: ";
		cin >> N;
		int i = 1;
		while (i < N)
		{
			cout << i << " ";
			i *= 2;
		}
		cout << endl;
	}


	// Сначала на вход поступает длина последовательности N. Затем элементы последовательности – целые числа.
	// Напишите программу, которая подсчитывает количество положительных чисел среди элементов последовательности.
	void problem6()
	{
		int N;
		cout << "N: "; cin >> N;
		vector<int>arr(N);
		for (int i = 0; i < N; ++i)
		{
			int a;  cin >> a;
			arr[i] = a;
		}
		int i = 0; vector<int>arrf(N);
		int a = 0;
		while (i < N)
		{
			if (arr[i] > 0) { arrf[i] = arr[i]; a++; }
			i++;
		}
		cout << a << endl;
	}


	//Напишите программу, которая в последовательности чисел находит сумму двузначных чисел, кратных 8. Программа в первой строке 
	// получает на вход число n−количество чисел в последовательности, во второй строке	−n		чисел, входящих в данную 
	// последовательность.
	void problem7()
	{
		int n;
		cout << "n: "; cin >> n;
		vector<int>arr(n);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int i = 0; int a = 0;
		while (i < n)
		{
			if (9 < arr[i] and arr[i] < 100 and arr[i] % 8 == 0)
			{
				a += arr[i];
			}
			i++;

		}
		cout << a << endl;
	}

}


//namespace Labs  // если закомментить этот namespace то код будет работать, афигенно, восторг
//{
//	double ComplexNumber::re() const {
//		return re_;
//	}
//
//	double ComplexNumber::im() const {
//		return im_;
//	}
//
//	double ComplexNumber::abs() const {
//		return sqrt(im_ * im_ + re_ * re_);
//	}
//
//	ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) const {
//		return ComplexNumber(re_ + other.re(), im_ + other.im());
//	}
//
//}


int main() {

	/*auto imaginary = Labs::ComplexNumber(0, 1);    complex number start
	auto real = Labs::ComplexNumber(1, 0);
	auto result = imaginary + real;
	std::cout << "Result: " << result.re() << " + " << result.im() << "i" << std::endl; complex number end  */ 

	homework::problem7();
	system("pause");
	return 0;
}