#include<iostream>
using namespace std;
// 2.4 with Constructor
class Inventory
{
    private:
    int id;
    string ItemName;
    float price;
    int quantity;
    float totalPrice;
    int sell,add;
    public:
    Inventory()
    {
        id=1;
    }
    Inventory(int i , string name, float p , int q)
    {
        id=i;
        ItemName=name;
        price=p;
        quantity=q;
        totalPrice = price * quantity;
        cout<<"\n Total Price:"<<totalPrice<<endl;

    }
    void display()
    {
      
    
        cout<<"\n Enter ID: "<<id<<endl;;
        cout<<"\n Enter Name: "<<ItemName<<endl;
        cout<<" \n Enter Price: "<<price<<endl;
        cout<<"\n Enter quantity: "<<quantity<<endl;;

    }
    void sellQuantity()
    {
        cout<<"\n How many Items you want to sell: ";
        cin>>sell;
        quantity -= sell;
        totalPrice = price * quantity;
        cout<<"\n Total Price:"<<totalPrice<<endl;
        cout<<"Item Name: "<<ItemName<<endl;
        cout<<"\n Your remaining Stock: "<<quantity<<endl;

    }
    void AddQuantity()
    {
    cout<<"\n How many Items you want to add: ";
        cin>>add;
        quantity += add;
        totalPrice = price * quantity;
        cout<<"\n Total Price:"<<totalPrice<<endl;
        cout<<"Item Name: "<<ItemName<<endl;
        cout<<"\n Your final Stock: "<<quantity<<endl;
    }
    
    

};

int main()
{
    int n,k,iD,quan,p,h;
    float pri;
    string nam;
    int m=1,t=1;
    cout<<"How many Items for inventory \n ";
     cin>>n;
    Inventory I[n];
   
        for(k=0;k<n;k++)
    {
        cout<<"\n Enter ID: ";
        cin>>iD;

        cout<<"\n Enter Name: ";
        cin>>nam;

        cout<<" \n Enter Price: ";
        cin>>pri;

        cout<<"\n Enter quantity: ";
        cin>>quan;

        I[k]=Inventory(iD, nam , pri , quan);


    }
       

    
    while(m==1)
    {
        cout<<"\n Enter ID for display: ";
        cin>>p;
        I[p-1].display();
        
        cout<<"\n Do you want to continue:";
        cout<<"\n 1.Yes \n 2.No \n";
        cin>>m;

    }
    while(t==1)
    {
        cout<<"\n What do you want to access ?";
        cout<<"\n 1. Sell \n 2. Add \n";
        cin>>h;
        if(h==1)
        {
        cout<<"\n Enter ID for Sell: ";
        cin>>p;
        I[p-1].sellQuantity();
        }
        if(h==2)
        {
            cout<<"\n Enter ID for Add: ";
        cin>>p;
        I[p-1].AddQuantity();
        }
        else if(h==3)
        {
            cout<<"\n Invalid Entry \n";

        }
         cout<<"\n Do you want to continue:";
        cout<<"\n 1.Yes \n 2.No \n";
        cin>>t;
    }

    return 0;
}
