// itmo_pj.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
//
//int main()
//{
//    std::cout << "Hello World!\n";
//    int a = 5;
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


#include <iostream>
#include <string>

using namespace std;

namespace problems3
{
	//дано 6-значное число найти сумму цифр на четных и нечетных местах
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

	//на вход подаются числа k, n затем подается n натуральных чисел
	//нужно найти количество чисел равных числу k
	/*int problem2()
	{7
		int n;
		cin >> n;
		int k;
		cin >> k;
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			int number;
			cin >> number;
			if (number == k)
				ans++;
		}
		return ans;
	}*/

	/*int problem2fr()
	{
		int k, n;
		cin >> k >> n;
		auto acc{ 0 };
		for (auto i = 0; i < n; i++)
		{
			int number;
			cin >> number;
			if (number == k)
				acc++;
		}
		return acc;
	}*/
	//вывести среднее ариф чисел кратных 3. на вход подается их количество
	//double problem3()  // ИЗМЕНИЛИ int на double
	//{
	//	int n;
	//	cin >> n;
	//	auto count{ 0 }, acc{ 0 };
	//	for (auto i = 0; i < n; i++)
	//	{
	//		int number;
	//		cin >> number;
	//		if (number % 3 == 0)
	//		{
	//			count++;
	//			acc += number;
	//		}
	//	}
	//	if (count != 0)
	//		return (double)acc / count;
	//	return -1.0;  // ИЗМЕНИЛИ -1 на -1.0
	//}
}

//namespace homework_problems
//{
//	int problem5()
//	{
//		int n;
//		cin >> n;
//		int minimal = 0;
//		///int counter = 0;
//		int nums[3];
//		for (int i = 0; i < n+1; i++)
//		{
//			cin >> nums[i];
//		}
//		cout << nums << endl;
//		return 0; //////////////////////////////////////////////////
//	}
//}



//int main() {
//	problems3::problem1();
//	/*int result = problems3::problem2();
//	cout << "Count of numbers equal to k: " << result << endl;*/
//	/*int result = problems3::problem3();
//	cout << "ans: " << result << endl;*/
//	/*homework_problems::problem5();*/
//	system("pause");
//}



