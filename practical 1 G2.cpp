#include<iostream>
#include<stdio.h>
using namespace std;
class Zaakat
{
    private:
        char account_NO[16];
        char holder_Name[20];
        int C_balance;
        int zakat;
        int gold = 141900;
        int silver = 1598;
        int nisab;
    public:
        void input()
        {
            cout<<"Enter the Account Number : ";
            cin>>account_NO;
            cin.ignore(1);
            cout<<"Enter the name of the Account Holder : ";
            cin.getline(holder_Name, 20);
            cout<<"Enter the available amount : ";
            cin>>C_balance;
            nisab = silver * 52;
        }
        void output()
        {
            if(C_balance >= nisab)
            {
                zakat = (C_balance * 2.5)/100;
                cout<<"Alhamdullilah ! Your Zakat of amount Rs."<<zakat<<" has been deducted."<<endl;
            }
            else{
                cout<<"You are below nisab ."<<endl;
            }
        }
};
int main()
{
    Zaakat A , S;
    A.input();
    A.output();
    cout<<" ";
    S.input();
    S.output();
}