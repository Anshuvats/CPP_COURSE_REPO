#include<iostream>
using namespace std;
class Base{
public:
    void display(){
    cout<<"Display of Base"<<endl;
    }
};
class Derived:public Base{
public:
    void display(int x)
    {
        cout<<"Display of Derived"<<endl;
    }
};
int main()
{
    Derived d;
    ////d.Base::display();//overloading
    d.display(10);
}
