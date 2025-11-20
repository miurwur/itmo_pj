#include <iostream>
#include <string>
#include <exception>

using namespace std;

enum class CustomError {
    NotAvailableAge
};

class CustomExeception : public exception {
public:
    CustomError error;
    explicit CustomExeception(CustomError err) : error(err) {}

    const char* what() const noexcept override {
        return "Custom exception occurred.";
    }
};

class Human {
public:
    Human(double age, const string& name = "NoName") : name_(name) {
        if (age >= 18)
            age_ = age;
        else
            throw CustomExeception(CustomError::NotAvailableAge);
    }

private:
    string name_;
    double age_{};
};

//int main() {
//    double age;
//    cout << "Enter age: ";
//    cin >> age;
//
//    try {
//        Human human(age);
//        cout << "Human created successfully.\n";
//    }
//    catch (const CustomExeception& e) {
//        if (e.error == CustomError::NotAvailableAge) {
//            cout << "Error: Age must be at least 18.\n";
//        }
//        else {
//            cout << e.what() << "\n";
//        }
//    }
//
//    return 0;
//}
