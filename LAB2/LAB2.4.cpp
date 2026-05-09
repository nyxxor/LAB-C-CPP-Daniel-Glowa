#include <iostream>
#include <vector>
#include <memory>

class Pracownik {
public:
    virtual ~Pracownik() = default;
};

class Programista : public Pracownik {
public:
    void piszKod() {
        std::cout << "Programista pisze kod" << std::endl;
    }
};

class Kierownik : public Pracownik {
public:
    void planuj() {
        std::cout << "Kierownik planuje" << std::endl;
    }
};

int main() {
    std::vector<std::shared_ptr<Pracownik>> zespol;
    zespol.push_back(std::make_shared<Programista>());
    zespol.push_back(std::make_shared<Kierownik>());

    for (auto& p : zespol) {
        if (auto prog = std::dynamic_pointer_cast<Programista>(p)) {
            prog->piszKod();
        } else if (auto kier = std::dynamic_pointer_cast<Kierownik>(p)) {
            kier->planuj();
        }
    }
    return 0;
}
