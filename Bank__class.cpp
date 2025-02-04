#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    private:
      string accountHolder;
      int accountNo;
      string accountType;
      double balance;

    public:
       BankAccount(){
        //Default constructer
        accountHolder="Mahesh";
        accountNo=12343256;
        accountType="Savings";
        balance=50000;
       }
       
       BankAccount(string hldr,int no,string type,double bal ){
        // Constructer with parameters
        accountHolder=hldr;
        accountNo=no;
        accountType=type;
        balance=bal;
       }
       
       void setInfo(){
       	cout<<"\n Enter user's name";
       	cin>>accountHolder;
       	cout<<" Enter account NO.";
       	cin>>accountNo;
       	cout<<" Enter account TYPE";
       	cin>>accountType;
       	cout<<" Enter account Balance";
       	cin>>balance;
	   }
	   
       string getHoldernm(){
            return accountHolder;
       }
       
       int getAccountNo(){
         return accountNo;
       }
       
       string getAccounttype(){
          return accountType;
       }
       
       int getBalance(){
         return balance;
       }
       
       void setAccountType(string new_Type){
           accountType=new_Type;
           cout<<"\n updated account to Current..."<<endl;
       }
       
       void deposite(double amount){
       	if(amount>0){
       	   balance+=amount;
       	   cout<<"\n\n depositing........."<<endl;
	   	   cout<<"New Balance :"<<balance;
        }
       	else
       	    cout<<"\n amount should be in positive";
	   }
	   
	   void withdraw(double amount){
	   	  if(amount<balance){
	   	  	balance-=amount;
	   	  	cout<<"\n\n witdrawing........."<<endl;
	   	  	cout<<"New Balance :"<<balance;
			}
		  else
		    cout<<"\n amount is greater than account balance";
	   }
	   
	   void displayAllDetails(){
	   	cout<<"\n ------- FINAL ACCOUNT DETAILS ------- ";
	   	cout <<"\n Account Holder's name is : "<<accountHolder;
	   	cout <<"\n Account Holder's Account Number is : "<<accountNo;
	   	cout <<"\n Account Holder's AccountType is : "<<accountType;
	   	cout <<"\n Account Holder's Balance is : "<<balance;
	   }
};

int main()
{
    BankAccount b1;
    cout<<"\nAccount Deatils :";
    cout<<"\nAccount Holder's NAME is : "<<b1.getHoldernm();
    cout<<"\nAccount Holder's Account No is : "<<b1.getAccountNo();
    cout<<"\nAccount Holder's Account type is : "<<b1.getAccounttype();
    cout<<"\nAccount Holder's Balance is : "<<b1.getBalance();
    b1.deposite(20000);b1.withdraw(20000);b1.setAccountType("Current ");b1.displayAllDetails();
    
    //2nd bank account 
    BankAccount b2("SURESH",6544654,"savings",100000);
    cout<<"\n\n 2ND Account Holder : ";
    b2.displayAllDetails();
    return 0;
    
}

