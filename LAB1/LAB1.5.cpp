#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int id;

public:
    Employee(std::string n, int i) : name(n), id(i) {}
    void display() {
        std::cout << "Emp: " << name << " (ID: " << id << ")" << std::endl;
    }
};

class Manager : public Employee {
    float bonus_percentage;

public:
    Manager(std::string n, int i, float b) : Employee(n, i), bonus_percentage(b) {}
};

int main() {
    Manager mgr("Adam Nowak", 101, 15.5f);
    mgr.display();
    return 0;
}