include <iostream>
using namespace std;
class Reverse
{
private:
    int n;
    int rev;
    int rem=0;

public:
     Reverse()
     {
     }
    void setN(int x)
    {
        n=x;
    }
    int getN()
    {
        return n;
    }
    int getrev()
    {
        return rev;
    }
    void reverse()
    {
       int r=0;
       int temp=n;
        while(temp!=0)
        {
            rem=temp%10;
            r=r*10+rem;
            temp=temp/10;
        }
         rev =r;
    }
};
int main()
{
    Reverse R;
    R.setN(634);
    R.reverse();
    cout << "reverse number "<<R.getN() <<" is " << R.getrev() << endl;
    return 0;
}
