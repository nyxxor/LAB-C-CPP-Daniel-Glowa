#include <iostream>

class Baza {
public:
    virtual void wykonaj() {
        std::cout << "Baza" << std::endl;
    }
    virtual ~Baza() = default;
};

class Srodek : public Baza {
public:
    void wykonaj() override final {
        std::cout << "Srodek" << std::endl;
    }
};

class Pochodna : public Srodek {
public:
};

int main() {
    Srodek obiekt;
    obiekt.wykonaj();
    return 0;
}
