#include <iostream>
using namespace std;
class Factorial
{
private:
    int fact;
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
    int getFactorial()
    {
        return fact;
    }
    void calculateFactorial()
    {
        int f = 1;
        for (int i = 1; i <= n; i++)
        {
            f = f * i;
        }
        fact = f;
    }
};
int main()
{
    Factorial F1;
    F1.setN(10);
    F1.calculateFactorial();
    cout << "Factorial of " << F1.getN() << " is " << F1.getFactorial() << endl;
    return 0;
}
