#include <stdio.h>
#include <iostream>


using namespace std;
class bank
{
    char name [100],add[100],y;
    int balance, amount;
public:
    void open_account();
    void deposite_money();
    void withdraw_money();
    void display_account();
};
void bank::open_account()//: missing
{
    cout << "Enter your full name: ";
    cin.ignore();
    cin.getline(name,100);
    cout << "What type of account you want to open savings (s) or current (c)";
    cin >> y;
    cout << "Enter amount of deposite: ";
    cin >> balance;
    cout << "Your account is created ";
}
void bank::deposite_money()//: missing
{
    int a ;
    cout << "Enter how much money you want to deposit: ";
    cin >> a;
    balance += a;
    cout << "Your total deposit amount\n ";
}
void bank::display_account()//: missing
{
    cout << "Enter the name: "<<name<<endl;
    cout << "Enter your address: "<<add<<endl;
    cout << "Type of account that you open: "<<y<<endl;
    cout << "Amount you deposite: "<<balance<<endl;
}
void bank::withdraw_money()//: missing
{
    cout << "Withdraw: ";
    cout << "Enter the amount of withdrawing";
    cin >> amount;
    balance = balance - amount;
    cout << "Now your total amount left is" <<balance;
}
int main()
{
    int ch,x,n;
    bank obj;
    do
    {
        cout <<"01)open account\n";//Delete " after Number
        cout <<"02)deposite money\n";
        cout <<"03)withdraw money\n";
        cout <<"04)display account\n";
        cout <<"05)Exit\n";
        cout << "Please select from the options above";
        cin>>ch;

        switch(ch)
        {
            case 1:"01)open account\n";//Delete " after Number
                obj.open_account();
                break;
            case 2:"02)deposite money\n";
                obj.deposite_money();
                break;
            case 3:"03)withdraw money\n";
                obj.withdraw_money();
                break;
            case 4:"04)display account\n";
                obj.display_account();
                break;
            case 5:
                if(ch == 5)
                {
                    cout <<  "Exit";
                }
            default:
                cout<< "This is not the proper exit please try again";
        }
        cout << "\ndo you want to select the next step then please press : y\n";
        cout << " If you want to exit then press : N";
        cin >> x;
        if(x == 'y' || x == 'Y');
        cout<< "Exit";
    }
    while (x == 'y' || x == 'Y');
}
