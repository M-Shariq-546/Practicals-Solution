#include<iostream>
#include<stdio.h>
using namespace std;
class Locphone{
    protected:
        char phone[11];
        char loc = '0';
    public:
        void input()
        {
            cout<<"Enter the Local Number : "<<loc;
            cin>>phone;
        }
        void output()
        {
            cout<<"Phone : "<<loc<<phone<<endl;
        }
};
class Natphone:public Locphone
{
    protected:
        char natcode[3];
    public:
        void input()
        {
            Locphone::input();
            cout<<"Enter City Code : ";
            cin>>natcode;
        }
        void output()
        {
            Locphone::output();
            cout<<"City Coded Phone : "<<natcode<<phone<<endl;
        }
};
class IntPhone:public Natphone
{
    private:
        char intcode[3];
    public:
        void input()
        {
            Natphone::input();
            cout<<"Enter the international code : ";
            cin>>intcode;
        }
        void output()
        {
            Natphone::output();
            cout<<"International coded phone : "<<intcode<<" "<<phone<<endl;
        }
};
int main()
{
    IntPhone P;
    P.input();
    P.output();
    return 0;
}
