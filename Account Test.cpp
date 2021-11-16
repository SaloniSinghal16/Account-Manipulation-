//
//  Account.cpp
//  Account Manipulation
//
//  Created by Saloni Singhal on 10/10/21.
//

#include "Account.hpp"
#include<iostream>
#include<string>

using namespace std;

int main(){
    Account account1{"Jane Green",50};
    Account account2{"Saloni Singhal",-90};
    cout<<"account 1:"<<account1.getName()<<" balance is $"<<account1.getBalance();
    cout<<"\naccount 2:"<<account2.getName()<<" balance is $"<<account2.getBalance();
    
    cout<<"\n\nEnter deposit amount for account1:";
    int depositAmount;
    cin>>depositAmount;
    cout<<"adding "<<depositAmount<<" to account balance";
    account1.deposit(depositAmount);
    
    cout<<"\n\naccount1:"<<account1.getName()<<" balance is $"<<account1.getBalance();
    
    cout<<"\n\nEnter deposit amount for account2:";
    cin>>depositAmount;
    cout<<" adding"<<depositAmount<<" to account balance";
    account2.deposit(depositAmount);
    cout<<"\n\naccount2:"<<account2.getName()<<" balance is $"<<account2.getBalance()<<endl;
}
