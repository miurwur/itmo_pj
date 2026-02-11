#include <iostream>
#include <string>
#include <vector>
#include <cmath> 
#include <unordered_set>

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


	//Последовательность состоит из натуральных чисел и завершается числом 0. Определите количество элементов этой 
	// последовательности, которые равны ее наибольшему элементу.
	void problem8()
	{
		int i = 1;
		int max_el = 0;
		vector<int>arr;
		int counter = 0;
		while (i != 0)
		{	
			cin >> i;
			arr.push_back(i);
			if (i > max_el) { counter = 1;  max_el = i; }
			else if (i == max_el) { counter++;}
		}
		cout << counter;
	}


	//Даны два числа. Определить цифры, входящие в запись как первого, так и второго числа. Программа должна вывести цифры,
	// которые имеются в обоих числах, через пробел. Цифры выводятся в порядке их нахождения в первом числе.
	void problem9()
	{
		int a; cout << "first number: "; cin >> a;
		int b; cout << "second number: "; cin >> b;
		string as = to_string(a); string bs = to_string(b);

		unordered_set<char> digits_in_b(bs.begin(), bs.end()); // цифры второго числа
		unordered_set<char> printed; // чтобы не повторять цифры

		for (char ch : as)
		{
			if (digits_in_b.count(ch) && !printed.count(ch))
			{
				cout << ch << " ";
				printed.insert(ch);
			}
		}
		cout << endl;
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


#include <iostream>
#include <vector>
#include <cmath> // для sqrt

using namespace std;

class Point {
public:
	vector<double> coords; // тут храним координаты

	// Конструктор, где передаем список координат
	Point(const vector<double>& c) {
		coords = c; // просто вставляем
	}

	// Метод для вычисления расстояния до другой точки
	double distanceTo(const Point& other) {
		// проверяем, что в обеих точках одинаковое число координат
		if (coords.size() != other.coords.size()) {
			cout << "Error: The dimensions of the points do not match." << endl;
			exit(EXIT_FAILURE); // завершаем программу с ошибкой
		}
		double sum = 0; // сумма квадратов разниц
		for (size_t i = 0; i < coords.size(); i++) {
			double diff = coords[i] - other.coords[i]; // разница по координате
			sum += diff * diff; // добавляем в сумму квадрат разницы
		}
		return sqrt(sum); // берем корень, т.е. находим расстояние
	}
};

//int main() {
//	// создадим две точки в 3D пространстве
//	Point p1({ 1.0, 2.0, 3.0 });
//	Point p2({ 4.0, 5.0, 6.0 });
//
//	//// создадим две точки в 2D пространстве
//	//Point p1({ 1.0, 2.0});
//	//Point p2({ 4.0, 5.0, 8.0});
//
//	// выводим расстояние между ними
//	cout << "Distance: " << p1.distanceTo(p2) << endl;
//
//	return 0;
//}






#include <iostream>    
#include <vector>      
#include <algorithm>    // для сортировки

using namespace std;

// Класс для представления города
class City {
public:
	string name;        // название города
	int population;     // численность населения
	bool hasMetro;      // наличие метро 
	int airportCount;   // количество аэропортов
	double rating;      // рейтинг качества жизни

	// Конструктор класса
	// принимает: название, население, наличие метро, кол-во аэропортов
	City(const string& n, int p, bool m, const vector<string>& airports)
		: name(n), population(p), hasMetro(m), airportCount(static_cast<int>(airports.size())), rating(0) {
		calculateRating();
	}

	void calculateRating() {
		rating = 0;

		if (population > 1000000) rating += 40; // баллы на население
		else if (population > 100000) rating += 20;
		else rating += 0;

		if (hasMetro) rating += 30; // баллы за наличие метро

		rating += airportCount * 10; // баллы за наличие аэропортов
	}

	// Нужна для функции sort() - определяем как сравнивать города
	bool operator<(const City& other) const {
		// Сортируем по убыванию рейтинга (больший рейтинг считается "меньшим" для sort)
		return rating > other.rating;  // Если наш рейтинг БОЛЬШЕ другого, мы "меньше"
	}
};


//int main() {
//
//	City Ms = City("Москва", 13000000, true,
//		{ "Внуково", "Шереметьево", "Домодедово", "Жуковский" });
//
//	City Sm = City("Смоленск", 330000, false, {}); 
//
//	City Vg = City("Воркута", 60000, false, { "Воркута" });
//
//	// создаем вектор из наших городов
//	vector<City> topCities = { Ms, Sm, Vg };  // помещаем в него все три города
//
//	// сортируем вектор городов
//	sort(topCities.begin(),   // начало вектора
//		topCities.end());    // конец вектора
//	// теперь города в векторе упорядочены по убыванию рейтинга
//
//	// выводим результат
//	cout << "Raiting:" << endl;
//
//	// Проходим по всем городам в векторе
//	for (size_t i = 0; i < topCities.size(); ++i) {
//		// выводим место, название и рейтинг
//		cout << (i + 1) << ". " << topCities[i].name
//			<< " | рейтинг: " << topCities[i].rating << " баллов" << endl;
//	}
//
//	return 0; 
//}



#include <iostream>
#include <vector>
#include <string>   
#include <algorithm>  

using namespace std;

// хранение дз
struct HomeTasks : public vector<string> {};

// роли пользователей
enum Role { Admin, Teacher, Student };


// пользователь (имя, email, роль, id группы)
class User {
private:
	string name;
	string email;
	Role role;
	vector<string> enrolledGroups;

public:
	// конструктор
	User(const string& n, const string& e, Role r) : name(n), email(e), role(r) {}

	// ггеттер для имени
	string getName() const { return name; }

	// геттер для роли
	Role getRole() const { return role; }

	// метод для группы
	void enrollInGroup(const string& groupId) {
		enrolledGroups.push_back(groupId);
	}

};

// Класс учебной группы (id группы, курс, преподаватель, дз)
class Group {
private:
	string groupId;
	string courseName;
	User* teacher;
	vector<User*> students;
	HomeTasks tasks;

public:
	// Конструктор для группы
	Group(const string& id, const string& course) : groupId(id), courseName(course), teacher(nullptr) {}

	// Метод для преподавателя
	bool assignTeacher(User* user) {
		if (user->getRole() != Teacher) return false;
		teacher = user;
		user->enrollInGroup(groupId);
		return true;
	}

	// добавление дз
	void addTask(const string& task) {
		tasks.push_back(task);
	}

	// вывод всей инфы о группе
	void displayInfo() const {
		cout << "Group: " << groupId << " (" << courseName << ")" << endl;

		if (teacher)  // Если преподаватель назначен
			cout << "Teacher: " << teacher->getName() << endl;

		cout << "Students: " << students.size() << endl;
		cout << "Tasks: " << tasks.size() << endl;
	}
};

int main() {
	User teacher("Vladislav Kazankov", "kazankov@mail.com", Teacher);
	User student1("Anya", "anya@gmail.com", Student);
	Group group("P3122", "C++");

	group.assignTeacher(&teacher);
	group.addStudent(&student1);
	group.addTask("homework");
	group.displayInfo();

	return 0;
}














//int main() {

	/*auto imaginary = Labs::ComplexNumber(0, 1);    complex number start
	auto real = Labs::ComplexNumber(1, 0);
	auto result = imaginary + real;
	std::cout << "Result: " << result.re() << " + " << result.im() << "i" << std::endl; complex number end  */ 

//	homework::problem8();
//	system("pause");
//	return 0;
//}