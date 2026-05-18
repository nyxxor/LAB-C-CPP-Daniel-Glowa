#include <iostream>
 
class Vector2D {
private:
    double x;
    double y;
 
public:
    Vector2D(double x, double y) : x(x), y(y) {}
 
    Vector2D operator+(const Vector2D& drugi) const {
        return Vector2D(x + drugi.x, y + drugi.y);
    }
 
    Vector2D operator-(const Vector2D& drugi) const {
        return Vector2D(x - drugi.x, y - drugi.y);
    }
 
    void display() const {
        std::cout << "[" << x << ", " << y << "]" << std::endl;
    }
};
 
int main() {
    Vector2D wektor1(5.0, 3.0);
    Vector2D wektor2(2.0, 1.0);
 
    Vector2D suma = wektor1 + wektor2;
    Vector2D roznica = wektor1 - wektor2;
 
    suma.display();
    roznica.display();
 
    return 0;
}
