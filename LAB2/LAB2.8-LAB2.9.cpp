#include <iostream>
#include <stdexcept>
#include <string>

class BladPracownika : public std::runtime_error {
public:
    BladPracownika(const std::string& wiadomosc) : std::runtime_error(wiadomosc) {}
};

class BladPensji : public BladPracownika {
public:
    BladPensji() : BladPracownika("Blad: Pensja ponizej minimum") {}
};

class Kierownik {
public:
    void ustawPensje(double kwota) {
        if (kwota < 4000) {
            throw BladPensji();
        }
        std::cout << "Ustawiono pensje: " << kwota << std::endl;
    }
};

int main() {
    Kierownik k;
    try {
        k.ustawPensje(3500);
    } catch (const BladPensji& e) {
        std::cerr << "Wyjatek specyficzny: " << e.what() << std::endl;
    } catch (const BladPracownika& e) {
        std::cerr << "Wyjatek ogolny: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Wyjatek standardowy: " << e.what() << std::endl;
    }
    return 0;
}
