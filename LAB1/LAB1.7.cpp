#include <iostream>
#include <string>

class Employee {
public:
    void display() { std::cout << "Display Employee" << std::endl; }
};

class Manager : public Employee {
public:
    void display() { std::cout << "Display Manager (with Bonus)" << std::endl; }
};

int main() {
    Employee* staff[2];
    staff[0] = new Employee();
    staff[1] = new Manager();

    for (int i = 0; i < 2; ++i) {
        staff[i]->display();
    }

    delete staff[0]; delete staff[1];
    return 0;
}