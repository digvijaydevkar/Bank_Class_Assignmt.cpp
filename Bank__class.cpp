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
         accountHolder='\0';
         accountNo=00;
         accountType='\0';
         balance=0.0;
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
       	cout<<"\n Enter account NO.";
       	cin>>accountNo;
       	cout<<"\n Enter account TYPE";
       	cin>>accountType;
       	cout<<"\n enter account Balance";
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
       }
       
       void deposite(double amount){
       	if(amount>0){
       	   balance+=amount;
       	   cout<<"\n depositing........."<<endl;
	   	   cout<<"Total Balance :"<<balance;
        }
       	else
       	    cout<<"\n amount should be in positive";
	   }
	   
	   void withdraw(double amount){
	   	  if(amount<balance){
	   	  	balance-=amount;
	   	  	cout<<"\n witdrawing........."<<endl;
	   	  	cout<<"Total Balance :"<<balance;
			}
		  else
		    cout<<"\n amount is greater than account balance";
	   }
	   
	   void displayAllDetails(){
	   	cout<<"\n ------- BANK HOLDER ALL DETAILS------- ";
	   	cout <<"\n Account Holder's name is : "<<accountHolder;
	   	cout <<"\n Account Holder's Account Number is : "<<accountNo;
	   	cout <<"\n Account Holder's AccountType is : "<<accountType;
	   	cout <<"\n Account Holder's Balance is : "<<balance;
	   }
};

int main()
{
    BankAccount b1;
    b1.setInfo();
    cout<<"\n 1ST Account Holder's Balance is : "<<b1.getBalance();
    b1.deposite(230000);
//    
//    BankAccount b2("SURESH",6544654,"savings",100000);
//    cout<<"\n 2ND Account Holder's NAME  is : "<<b2.getHoldernm();
//    b2.displayAllDetails();
    
}

