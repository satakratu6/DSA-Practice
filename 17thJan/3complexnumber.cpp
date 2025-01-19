#include <iostream>
using namespace std;
class complex
{
private:
  float real, img;

public:
  complex(float r = 0, float i = 0) : real(r), img(i) {};
  complex operator+(const complex &obj)
  {
    complex temp;
    temp.real = real + obj.real;
    temp.img = img + obj.img;
    return temp;
  }
  void display()
};