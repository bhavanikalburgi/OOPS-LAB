// one base class one derived class. (we use virtual functions when we encounter  (Diamond problem in inheritance) but here
                        // only we have 1 base class and 1 derived class so why are we using virtual function? => we are using virtual function here because
                        // here we want to do function override (Late binding)  ).


#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Shape" << endl;
    }
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Circle" << endl;
    }
};

int main()
{
    Shape *s;
    Circle c;

    s = &c;
    s->draw();

    return 0;
}
