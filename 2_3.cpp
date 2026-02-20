#include<iostream>
using namespace std;
// without Constructor
class bankCustomer 
{
    private:
    string accName; 
    int accNum,balance=10000,add,add1,k;
    

    public :
    void accEntry()
    {
        cout<<"\nAccount Holder Name"<<endl;
        cin>>accName;

        cout<<"\nAccount Number"<<endl;
        cin>>accNum;
        
        cout<<"\nBalance  "<<balance<<endl;

    }
    void accDisplay()
    {
        cout<<"\n Account Holder Name "<<accName<<endl;

        cout<<"\n Account Number "<<accNum<<endl;
        
        cout<<"\n Balance "<<balance<<endl;
    }
    void deposit()
    {
        
            cout<<"\nHow much money to deposit ";
            cin>>add;
            if(add>0)
            {
            balance = balance + add;
            cout<<"\n Now acc Balance"<<balance<<endl;
            }
            else 
            {
                cout<<"\n Invalid deposit\n";
            }
    }
    void withdraw()
    {
            cout<<"\nHow much money to withdraw?";
            cin>>add;
            if(add < balance)
            {
            balance = balance - add;
           cout<<"\n Now acc Balance"<<balance<<endl;
           }
           else if( add>= balance )
           {
            cout<<"\nInsufficient Balance to withdraw these amt\n";
           }
           else
           {
            cout<<"Invalid\n\n\n\n\n YOur Balance is less than withdrawal amt\n";

           }
            
        }
        
    
        void sampleDisplay()
        {
            string accName1; 
           int accNum1,balance1=0000;
           cout<<"\n Sample Display \n";
           accName1="Kevin";
           accNum1=435;

          cout<<"\nAccount Holder Name "<<accName1<<endl;
          cout<<"\nAccount Number "<<accNum1<<endl;
          cout<<"\nBalance "<<balance1<<endl;
    
        }  
};

 int main ()
 {
    int i,j,k,n,v=1,u=1,p,p1;
    bankCustomer sampleAcc;
    sampleAcc.sampleDisplay();

    cout<<"\nHow many Bank Account to create\n";
    cin>>n;
    bankCustomer b[n];
    for(i=0;i<n;i++)
    {
        b[i].accEntry();
    }
    while(v==1)
    {
        cout<<"\n Do you want to see any Account record \n";
        cout<<"then give Acc NUmber of acc to see Account record\n";
        cin>>p;
        b[p-1].accDisplay();
          
        cout<<"\n Do you want to see again any Account record then \n";
        cout<<"1. Yes \n 2. No \n";
        cin>>v;   

    }
    while(u==1)
    {
        cout<<"\n Do you want to update any Account record \n";
        cout<<"\n 1. Deposit \n 2. Withdraw \n"<<"\n\n\n\n";
        cin>>j;
        if(j==1)
        {
            cout<<"Deposit \n";
            cout<<"then give Acc NUmber of acc to see Account record\n";
        cin>>p1;
        b[p1-1].deposit();
        }
        else if(j==2)
        {
            cout<<"Withdraw\n";
        cout<<"then give Acc NUmber of acc to see Account record\n";
        cin>>p1;
        b[p1-1].withdraw();
        }
        else 
        {
            cout<<"Invalid Entry\n";
        }
        cout<<"\n Do you want to update again any Account record \n";
        cout<<"1. Yes \n 2. No \n";
        cin>>u;   
    }



 }

//  1. add1= balance + add or add1 = balance - add these thing would only do add1 print not stored it and 
//helpful in next deposit and withdrawal 
//  instead go for balance = balance + add or balance = balance - add