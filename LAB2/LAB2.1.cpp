#include <iostream>

class Pracownik {
public:
    Pracownik() {}
    virtual ~Pracownik() {
        std::cout << "Destruktor Pracownik" << std::endl;
    }
    virtual void pracuj() = 0;
};

class Kierownik : public Pracownik {
    int* dane;
public:
    Kierownik() {
        dane = new int[100];
    }
    ~Kierownik() {
        delete[] dane;
        std::cout << "Destruktor Kierownik" << std::endl;
    }
    void pracuj() override {}
};

int main() {
    Pracownik* p = new Kierownik();
    delete p;
    return 0;
}
