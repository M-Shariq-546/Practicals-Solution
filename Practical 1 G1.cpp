#include<iostream>
using namespace std;
class Complex
{
    private:
        int a;
        int b;
    public:
        Complex()
        {
            a =0;
            b=0;
        }
        Complex(int r  , int i)
        {
            a = r;
            b = i;
        }
        Complex operator +(Complex s)
        {
            Complex temp;
            temp.a = a + s.a;
            temp.b = b + s.b;
            return temp;
        }
        Complex operator -(Complex s)
        {
            Complex temp;
            temp.a = a - s.a;
            temp.b = b - s.b;
            return temp;
        }
        void output()
        {
            cout<<"a + bi = "<<a<<" + "<<b<<"i"<<endl;
        }
        void setA(int r)
        {
            a = r;
        }
        void setI(int i)
        {
            b = i;
        }
        int getA()
        {
            return a;
        }
        int getI()
        {
            return b;
        }
};
int main()
{
    Complex n(2,5), n1(4, 9) , n2 , n3;
    cout<<"The Complex Numbers representations are : "<<endl;
    n2 = n1 - n;
    n2.output();
    n3 = n1 + n;
    n3.output();
    n.output();
    n1.output();
    return 0;
}