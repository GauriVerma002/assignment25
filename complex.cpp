#include<iostream>
  using namespace std;
  class Complex{
    private:
       int a,b;    //a and b are instance member variables
    public:
       Complex(int x, int y)
       {
        a=x;
        b=y;
       }
       void setdata(int x, int y)
       {
        a=x;
        b=y;
       }
       void showData()
       {
cout<<endl<<"real="<<a<<" img ="<<b;
       }
       Complex add(Complex C)  //copy constructor
       {
        Complex temp(0,0);
        temp.a= a+C.a;
        temp.b= b+C.b;
        return temp;
       }
  };
  int main()
  {
    Complex  C1(3,4),C2(2,1);   //C1 and C2 are instance of class complex 
    C1.showData();
    C2.showData();
    cout<<endl;
  }
