#include <iostream>
#include <string>

class Employee {
public:
    virtual void display() = 0;
    virtual double calculate_salary() const = 0; 
    virtual ~Employee() = default;
};

class Manager : public Employee {
    double base_salary = 5000;
public:
    void display() override { std::cout << "Manager display" << std::endl; }
    double calculate_salary() const override { return base_salary + 1500; }
};

int main() {
    
    Employee* ptr = new Manager();
    ptr->display();
    std::cout << "Salary: " << ptr->calculate_salary() << std::endl;
    
    delete ptr;
    return 0;
}