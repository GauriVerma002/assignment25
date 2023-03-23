#include<iostream>
  using namespace std;
  class Time{
    private:
       int hours;
       int min;
       int sec;    
    public:
       Time(int x, int y, int z)
       {
        hours=x;
        min=y;
        sec=z;  
       }
       void setData(int x, int y, int z)
       {
        hours=x;
        min=y;
        sec=z;
       }
       void showData()
       {
      cout<<endl<<hours<<"hr "<<min<<"min "<<sec<<"sec ";
       }
       
  };
  int main()
  {
    Time T1(3,4,6),T2(2,1,8);    
    T1.showData();
    T2.showData();
    cout<<endl;
    return 0;
  }
