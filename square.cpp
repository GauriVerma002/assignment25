#include <iostream>
using namespace std;
class Square
{
private:
    int sqr;
    int n;

public:
    void setN(int x)
    {
        n = x;
    }
    int getN()
    {
        return n;
    }
    int getSquare()
    {
        return sqr;
    }
    void calculateSquare()
    {
        int s;
        s=n*n;
        sqr = s;
    }
};
int main()
{
    Square S;
    S.setN(5);
    S.calculateSquare();
    cout << "Square of " << S.getN() << " is " << S.getSquare() << endl;
    return 0;
}
