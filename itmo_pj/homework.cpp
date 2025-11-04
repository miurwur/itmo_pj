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
}

int main() {
	homework::problem1();
	system("pause");
}