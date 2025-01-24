#include<iostream>
#include<iomanip>

void showbalance(double balance);
double withdraw(double balance);
double deposit();
int main(){
  double balance = 0;
  int choice = 0;
  do{
     std::cout<<"*************\n";
     std::cout<<"Enter your choice\n";
     std::cout<<"*************\n";
     std::cout<<"1.Show balance\n";
     std::cout<<"2.Deposit money\n";
     std::cout<<"3.Withdraw money\n";
     std::cout<<"4.Exit\n";
     std::cin>>choice;
     std::cin.clear();
     fflush(stdin);
     switch(choice){
       case 1: showbalance(balance);
               break;
       case 2: balance += deposit();
               showbalance(balance);
               break;
       case 3: balance -= withdraw(balance);
               showbalance(balance);
               break;
       case 4: std::cout<<"Thanks for visiting"<<'\n';
               break;
       default: std::cout<<"Enter a valid choice";  
     }
    }while(choice!=4);
      return 0;
      }  
  void showbalance(double balance){
     std::cout<<"Balance is$:"<<balance;
     
  }
  double withdraw(double balance){
    double amount = 0;
    std::cout<<"Enter amount to withdraw\n";
    std::cin>>amount;
    return amount;
    
  }
  double deposit(){
    double amount = 0;
    std::cout<<"Enter amount to deposit";
    std::cin>>amount;
     if(amount > 0){
        return amount;
     }
    else{
      std::cout<<"Enter a positive amount";
    }
  }

