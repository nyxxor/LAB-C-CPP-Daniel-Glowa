#include <iostream>
#include <string>

class Employee {
    static int active_instances;
public:
    Employee() { active_instances++; }
    ~Employee() { active_instances--; }

    static int get_active_instances() {
        return active_instances;
    }
};

int Employee::active_instances = 0;

int main() {
    Employee e1, e2;
    std::cout << "Aktywne: " << Employee::get_active_instances() << std::endl;
    {
        Employee e3;
        std::cout << "Aktywne (w bloku): " << Employee::get_active_instances() << std::endl;
    }
    std::cout << "Aktywne (po bloku): " << Employee::get_active_instances() << std::endl;
    return 0;
}