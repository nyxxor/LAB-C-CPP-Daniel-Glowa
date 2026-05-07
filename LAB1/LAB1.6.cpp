#include <iostream>
#include <string>

class Employee {
protected:
    std::string name;
    int id;

public:
    Employee(std::string n, int i) : name(n), id(i) {}
};

class Manager : public Employee {
    float bonus;

public:
    Manager(std::string n, int i, float b) : Employee(n, i), bonus(b) {}

    void display() {
        std::cout << "Manager: " << name << ", ID: " << id << ", Bonus: " << bonus << std::endl;
    }
};

int main() {
    Manager mgr("Ewa Wisniewska", 202, 500.0);
    mgr.display();
    return 0;
}