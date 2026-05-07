#include <iostream>
#include <string>

class Employee {
public:
    virtual void display() {
        std::cout << "Display Employee" << std::endl;
    }
    virtual ~Employee() {}
};

class Manager : public Employee {
public:
    void display() override {
        std::cout << "Display Manager (Dynamic Polymorphism)" << std::endl;
    }
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