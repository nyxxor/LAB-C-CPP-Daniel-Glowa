#include <iostream>
#include <vector>
#include <memory>

class Ksztalt {
public:
    virtual void rysuj() const = 0;
    virtual ~Ksztalt() = default;
};

class Kolo : public Ksztalt {
public:
    void rysuj() const override {
        std::cout << "Rysuje kolo" << std::endl;
    }
};

class Kwadrat : public Ksztalt {
public:
    void rysuj() const override {
        std::cout << "Rysuje kwadrat" << std::endl;
    }
};

int main() {
    std::vector<std::unique_ptr<Ksztalt>> pojemnik;
    pojemnik.push_back(std::make_unique<Kolo>());
    pojemnik.push_back(std::make_unique<Kwadrat>());

    for (const auto& k : pojemnik) {
        k->rysuj();
    }
    return 0;
}
