
#define POINT_H_INCLUDED
#include <iostream>
using namespace std;

class Point
{
private:
    float a;
    float b;

public:
    Point(float x, float y) : a(x), b(y) {}
    void deplace(float x, float y);
    void affiche();
};
