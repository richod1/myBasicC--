#include <iostream>
#include <string>


class BankAccount{
    private:
        std::string owner;
        double balance;
    public:
        BankAccount(std::string name,double initial_balance){
            owner=name;
            balance=initial_balance;
        }

        void deposit(double amount){
            balance+=amount;
        }
        void withdraw(double amount){
            if(amount<=balance){
                balance-=amount;
            }else{
                std::cout<<"Insufficient funds"<<std::endl;
            }
        }
        void displayBalance()const{
            std::cout<<"Owner :"<<owner<<",Balance is :GHS"<<balance<<std::endl;
        }
};
int main(){

}