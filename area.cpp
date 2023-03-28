#include <iostream>
using namespace std;
class Shape
{
    protected:
    double area;
};
class Circle :public Shape
{
protected:
    int r;

public:
    void get()
    {
        cout<<"Enter radius of Circle";
        cin>>r;
    }
   
    double Area()
    {
        area=3.14*r*r;
        return area;
    }
};

class Rectangle :public Shape
{
protected:
    int l,b;

public:
    void get()
    {
        cout<<"Enter length and breadth of rectangle ";
        cin>>l>>b;
    }
   
    double Area()
    {
        area=l*b;
        return area;
    }
};

class Square :public Shape
{
protected:
    int a;

public:
    void get()
    {
        cout<<"Enter side of Square";
        cin>>a;
    }
   
    double Area()
    {
        area= a*a;
        return area;
    }
};
int main()
{
  Circle C;
  double circle;
  C.get();
  circle = C.Area();
  cout << "Area of Circle : " << circle << endl;

  Rectangle R;
  float rectangle;
  R.get();
  rectangle = R.Area();
  cout << "Area of Rectangle : " << rectangle << endl;

  Square S;
  double square;
  S.get();
  square = S.Area();
  cout << "Area of Square : " << square << endl;
  return 0;
}
