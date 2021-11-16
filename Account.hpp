//
//  Account.hpp
//  Account Manipulation
//
//  Created by Saloni Singhal on 10/10/21.
//

#ifndef Account_hpp
#define Account_hpp

#include <string>

class Account{
public:
    Account(std::string accountName, int initialBalance)
    :name{accountName}{
    if (initialBalance>0){
        balance=initialBalance;
    }
    }
    void deposit(int depositAmount){
        if(depositAmount>0){
            balance=balance+depositAmount;
        }
    }
int getBalance() const{
    return balance;
}
    void setName(std::string accountName){
        name=accountName;
    }
    std::string getName() const{
        return name;
    }
private:
    std::string name;
int balance{0};
};

#endif /* Account_hpp */
