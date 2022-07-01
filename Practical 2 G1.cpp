#include<iostream>
#include<stdio.h>
using namespace std;
class student
{
    protected:
        char name[20];
        char address[20];
    public:
};
class marks
{
    protected:
     int mark[3];
     int i;

    public:
    marks()
    {
        mark[0] = 0;
        mark[1] = 0;
        mark[2] = 0;
    }
};
class Show:public student , marks
{
    public:
        void display()
        {
            cout<<"enter the name of the student : ";
            cin.getline(name , 20);
            cout<<"Enter the address : ";
            cin.getline(address , 20);
            for(int i=0 ; i<3 ; i++)
            {
                cout<<"Enter the "<<(i+1)<<" subject marks : ";
                cin>>mark[i];
            }
            for(int i =0 ; i<3 ; i++)
            {
                cout<<"The marks are : "<<mark[i]<<endl;
            }
        }

};
int main()
{
    Show s;
    s.display();
    return 0;
}