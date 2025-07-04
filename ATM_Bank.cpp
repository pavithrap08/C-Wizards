#include<bits/stdc++.h>

using namespace std;
class Atm{
    private:
    long int account_No;
    string name;
    int PIN;
    double balance;
    string mobile_No;
    public: 
    
    void setData(long int acc,string n,int p,double b,string mn)
    {
        account_No=acc;
        name=n;
        PIN=p;
        balance=b;
        mobile_No=mn;
    }
    long int getAccNo()
    {
        return account_No;
    }
    string getName()
    {
        return name;
    }
    int getPIN()
    {
        return PIN;
    }
    double getBalance()
    {
        return balance;
    }
    string getmobile_No()
    {
        return mobile_No;
    }
    void withdraw(int amount)
    {
        if(balance-amount>=0 && amount>0)
        {
            balance-=amount;
            cout<<"Your Current Balance is "<<balance ;
              cout<<"Please get Your cash,Thank You";
            
        }
        else
        {
            if(amount<=0)
            {
                cout<<"Invalid amount";
            }
            else
            {
            cout<<"Insufficient Balance";
            }
        }
    }
    void setMobileNo(string old,string newm)
    {
        if(old==mobile_No && newm.length()==10 &&  all_of(newm.begin(), newm.end(), ::isdigit))
        {
            mobile_No=newm;
            cout<<"Your Mobile Phone is Updated succesfully"<<endl;
        }
        else
        {
            cout<<"Invalid Mobile Number!! Try Again"<<endl;
            
        }
    }
    
    void setup()
    {
        cout<<"Account Details :"<<endl;
        cout<<"Account No"<<getAccNo()<<endl;
        cout<<"Name:"<<getName()<<endl;
        cout<<"PIN Number: "<<getPIN()<<endl;
        cout<<"Balance: "<<getBalance()<<endl;
        cout<<"Mobile Number: "<<getmobile_No()<<endl;
        
    }
};
int main()
{
    long int accNo;
    int pin;
    
    Atm A;
    A.setData(2000000,"Pavithra",45,25000.00,"8220659714");
    do{
        system("cls");
        cout<<"Welcome to ATM"<<endl;
        cout<<"Enter Your Account No :"<<endl;
        cin>>accNo;
        cout<<endl<<"Enter PIN :";
        cin>>pin;
        if((accNo==A.getAccNo()) && (pin==A.getPIN()))
        {
            do{
                int amount =0;
                string oldMobileNo,newMobileNo;
                system("cls");
                cout<<"************Welcome to ATM************"<<endl;
                cout<<"1->Check Balance"<<endl;
                cout<<"2->Cash Withdraw"<<endl;
                cout<<"3->Show User Details"<<endl;
                cout<<"4->Update MobileNo "<<endl;
                cout<<"5-> Exit"<<endl;
                int choice;
                
                cout<<"Select your choice"<<endl;
                cin>>choice;
                switch(choice)
                {
                    case 1:
                    cout<<"Your Bank Balance is "<<A.getBalance()<<endl;
                   
                    break;
                    case 2:
                    cout<<"Enter the Amount :";
                    cin>>amount;
                    A.withdraw(amount);
                  
                    cout<<endl;
                    break;
                    case 3:
                    A.setup();
                    cout<<endl;
                    break;
                    case 4:
                    cout<<"Enter old MobileNo"<<endl;
                    cin>>oldMobileNo;
                    cout<<"Enter new Mobile No"<<endl;
                    cin>>newMobileNo;
                    A.setMobileNo(oldMobileNo,newMobileNo);
                    break;
                    case 5: 
                    cout<<"Thank you for using our Bank Services!";
                    exit(0);
                    
                    default:
                    cout<<"Enter valid Choice";
                    break;
                }
            }while(1);
        }
        
    }while(1);
    A.setup();
}
