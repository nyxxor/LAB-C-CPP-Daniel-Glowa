#include <iostream>

class Buffer {
    int* data;
    int size;

public:
    Buffer(int s) : size(s) {
        data = new int[size];
        std::cout << "Allocated " << size << std::endl;
    }

    ~Buffer() {
        delete[] data;
        std::cout << "Deallocated" << std::endl;
    }
};

int main() {
    std::cout << "Start" << std::endl;
    {
        Buffer b(100);
    }
    std::cout << "End" << std::endl;
    return 0;
}