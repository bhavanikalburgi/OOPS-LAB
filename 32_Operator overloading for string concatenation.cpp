// program for binary operator overloading ... to concatinate two strings

//write a c++ program to add two complex numbers with operator overloading.

#include <iostream>
#include <string>
using namespace std;

class JoinText {
    string first, second;

public:
    JoinText(string a = "", string b = "") {
        first = a;
        second = b;
    }

    JoinText operator+(const JoinText &obj) {
        return JoinText(first + obj.first);
    }

    void display() {
        cout << first;
    }
};

int main() {
    JoinText x("Hello "), y("World");
    JoinText result = x + y;

    result.display();

    return 0;
}
