#include <iostream>
#include <string>

class Window {
    int width, height;
    std::string title;

public:
    Window(int w, int h, std::string t) : width(w), height(h), title(t) {}
    Window(int w, int h) : Window(w, h, "Untitled") {}
    Window() : Window(800, 600) {}

    void info() {
        std::cout << "Window: " << title << " [" << width << "x" << height << "]" << std::endl;
    }
};

int main() {
    Window w1(1024, 768, "Game");
    Window w2(640, 480);
    Window w3;

    w1.info();
    w2.info();
    w3.info();
    return 0;
}