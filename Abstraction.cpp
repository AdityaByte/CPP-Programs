#include<iostream>
using namespace std;

class BankAccount {
  protected:
    double balance;

  public:
    virtual bool deposit(double amount) = 0; // These two are the pure virtual functions
    virtual double withdraw(double amount) = 0;
    
    virtual double balanceEnquiry() = 0;
    
};

class SavingBankAccount: public BankAccount {
  public:
    bool deposit(double amount) override {
        if (amount <= 0){
            return false;
        }
        balance = balance + amount;
        return true;
    }
    
    double withdraw(double amount) override {
        if (amount > balance) {
            return -1;
        }
        balance = balance - amount;
        return amount;
    }
    
    double balanceEnquiry() override {
        return balance;
    }
};


int main() {
    BankAccount *account = new SavingBankAccount();
    if(account->deposit(100)) {
        cout << "Deposited"<< endl;
    } else {
        cout << "Not Deposited" << endl;
    }
    
    cout << "Balance : " << account->balanceEnquiry() << endl;
    
    double wd = account->withdraw(101);
    
    cout << wd << endl;
    
    if (wd == -1) {
        cout << "Balance is less" << endl;
    } else {
      cout << wd << endl;  
    }
    
    cout << "balance : " << account->balanceEnquiry() << endl;
}
