#include <iostream>
#include <string>
#include <memory>

class IRejestrator {
public:
    virtual void zapisz(const std::string& tresc) = 0;
    virtual ~IRejestrator() = default;
};

class RejestratorKonsolowy : public IRejestrator {
public:
    void zapisz(const std::string& tresc) override {
        std::cout << "Log: " << tresc << std::endl;
    }
};

class SystemZamowien {
    std::shared_ptr<IRejestrator> loger;
public:
    SystemZamowien(std::shared_ptr<IRejestrator> l) : loger(l) {}
    void przetworz() {
        loger->zapisz("Przetwarzanie zamowienia...");
    }
};

int main() {
    auto r = std::make_shared<RejestratorKonsolowy>();
    SystemZamowien system(r);
    system.przetworz();
    return 0;
}
