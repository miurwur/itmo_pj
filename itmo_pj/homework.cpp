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
		int n;
		cin >> n;
		int res_chet = 0;
		int res_ne_chet = 0;
		res_chet += (n / 10000) % 10 + (n / 100) % 10 + n % 10;
		res_ne_chet += n / 100000 + (n / 1000) % 10 + (n / 10) % 10;
		cout << "Even summ: " << res_chet << endl;
		cout << "Odd summ: " << res_ne_chet << endl;
	}
	void problem2()
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
		
	}
}

int main() {
	homework::problem2();
	system("pause");
}