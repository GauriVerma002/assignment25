#include <iostream>
using namespace std;
class Largest
{
private:
    int a;
    int b;
    int c;
    int large;

public:
    void setN(int x, int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    int getLarge()
    {
        return large;
    }
    void calculateLarge()
    {
        if(a>b&&a>c)
           large=a;
        else if(b>c)
           large=b;
        else
           large=c;
    }
};
int main()
{
    Largest l;
    l.setN(6, 8,3);
    l.calculateLarge();
    cout << "largest number is " << l.getLarge() << endl;
    return 0;
}
