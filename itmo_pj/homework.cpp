#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace homework
{
	// ¬водитс€ натуральное число N а затем N
	// целых чисел последовательности.Ќайдите количество минимальных элементов в последовательности.

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
		for (size_t i = 0; i < dna.length(); i++)
		{

		}
	}
}

int main() {
	homework::problem3();
	system("pause");
}