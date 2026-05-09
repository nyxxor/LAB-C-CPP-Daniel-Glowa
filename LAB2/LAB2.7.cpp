#include <iostream>
#include <string>

template <typename T>
T podajWiekszy(T pierwszy, T drugi) {
    return (pierwszy > drugi) ? pierwszy : drugi;
}

int main() {
    std::cout << podajWiekszy(10, 20) << std::endl;
    std::cout << podajWiekszy(3.14, 2.72) << std::endl;
    std::cout << podajWiekszy(std::string("auto"), std::string("rower")) << std::endl;
    return 0;
}
