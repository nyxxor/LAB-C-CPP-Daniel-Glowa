#include <iostream>
#include <string>

class Employee {
public:
    const int id;
    std::string name;
    Employee(int p_id, std::string p_name) : id(p_id), name(p_name) {
    }

    void display() {
        std::cout << "ID: " << id << ", Name: " << name << std::endl;
    }
};

int main() {
    Employee emp(1, "Jan Kowalski");
    emp.display();
    return 0;
}