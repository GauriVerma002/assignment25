#include <iostream>
using namespace std;
class Rectangle
{
private:
    int area;
    int l,b;

public:
    void set(int x,int y)
    {
        l = x;
        b = y;
    }
    int getArea()
    {
        return area;
    }
   
    void calculateArea()
    {
        area=l*b;
    }
};
int main()
{
    Rectangle r;
    r.set( 6, 8);
    r.calculateArea();
    cout << "Area of Rectangle is " << r.getArea() << endl;
    return 0;
}
