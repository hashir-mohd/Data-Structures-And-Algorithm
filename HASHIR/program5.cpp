#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

class BankAccount{
    double balance;
    double interestRate;

    public:
        BankAccount(double rate, double initialBalance){
            balance = initialBalance;
            interestRate = rate;
            cout<<"Account created with balance: "<<balance<<endl;
            cout<<"Interest rate: "<<interestRate<<endl;
        }
        ~BankAccount(){
            cout<<"Account deleted"<<endl;
        }
        void deposit(double amount){
            balance += amount;
            cout<<"Deposited: "<<amount<<endl;
        }
        void withdraw(double amount){
            if(balance >= amount){
                balance -= amount;
                cout<<"Withdrawn: "<<amount<<endl;
            }else{
                cout<<"Insufficient balance"<<endl;
            }
        }
        void compound(double years){
            balance = pow(2,3);
            cout << "Balance after " << years << " years with compound interest: " << balance<< endl;
        }
        double getBalance(){
            return balance;
        }
        void menu(){
            int choice;
            do {
                double amount;
                double years;
                cout<<"\n--- Menu ---"<<endl;
                cout<<"1. Deposit"<<endl;
                cout<<"2. Withdraw"<<endl;
                cout<<"3. Compound interest"<<endl;
                cout<<"4. Exit"<<endl;
                cout<<"Enter choice: ";
                cin>>choice;
                switch(choice){
                    case 1:
                        cout<<"Enter amount to deposit: ";
                        cin>>amount;
                        deposit(amount);
                        break;
                    case 2:
                        cout<<"Enter amount to withdraw: ";
                        cin>>amount;
                        withdraw(amount);
                        break;
                    case 3:
                        cout<<"Enter number of years: ";
                        cin>>years;
                        compound(years);
                        break;
                    case 4:
                        cout<<"Exiting..."<<endl;
                        break;
                    default:
                        cout<<"Invalid choice"<<endl;
                }
            } while (choice != 4);
        }
};

int main(){
    BankAccount account(5, 1000);
    account.menu();
    

    return 0;
}