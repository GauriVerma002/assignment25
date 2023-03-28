#include <iostream>
using namespace std;
class Circle
{
private:
    double area;
    int r;

public:
    void set(int x)
    {
        r = x;
        }
    double getArea()
    {
        return area;
    }
   
    void calculateArea()
    {
        area=3.14*r*r;
    }
};
int main()
{
    Circle R;
    R.set( 5);
    R.calculateArea();
    cout << "Area of Circle is " << R.getArea() << endl;
    return 0;
}
