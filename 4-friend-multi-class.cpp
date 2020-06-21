#include <iostream>
using namespace std;

class B;  //forward declaration to ignore error
class A
{
    private:
    int a;
    public:
    void setdata(int x)
    {
        a=x;
      
    }
   
    friend void sum( A, B);
   
};


class B
{
    private:
    int b;
    public:
    void setdata(int x)
    {
        b=x;
      
    }
   
    friend void sum(A,B);
   
};


void sum(A c1 , B c2)
{
    cout<<"sum is "<<c1.a+c2.b;
}


int main()
{
A c1;
B c2;
c1.setdata(10);
c2.setdata(20);
sum(c1,c2);
        
	return 0;
}
