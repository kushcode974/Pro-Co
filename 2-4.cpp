#include<iostream>
using namespace std;
// without Constructor
{
   private:
   int ID , quantity , price,add,k,totalPrice;
   string name;
          

   public:
   void itemEntry()
   {
      cout<<"Item Name ";
      cin>>name;
      cout<<"\n";
      cout<<"Item ID ";
      cin>>ID;
      cout<<"\n";
      cout<<"Item Price ";
      cin>>price;
      cout<<"\n";
      cout<<"Item Quantity ";
      cin>>quantity;
      cout<<"\n";
      totalPrice = quantity * price ;
      cout<<"Total Price "<<totalPrice<<endl;
      
   }
   void itemDisplay()
   {
     cout<<"Item Name "<<name;
      cout<<"\n";

      cout<<"Item ID "<<ID;
      cout<<"\n";

      cout<<"Item Price "<<price;
      cout<<"\n";

      cout<<"Item Quantity "<<quantity;
      cout<<"\n";
       totalPrice = quantity * price ;
      cout<<"Total Price "<<totalPrice<<endl;
      
     
   }
   void sampleDisplay()
   {
    int ID1 , quantity1 , price1,add,k,totalPrice1;
   string name1;
    name1="Pin";
    ID1=0;
    quantity1=100;
    price1=150;

    cout<<"\n Sample Display \n";
    cout<<"Item Name "<<name1;
      cout<<"\n";

      cout<<"Item ID "<<ID1;
      cout<<"\n";

      cout<<"Item Price "<<price1;
      cout<<"\n";

      cout<<"Item Quantity "<<quantity1;
      cout<<"\n";
       totalPrice1 = quantity1 * price1 ;
      cout<<"Total Price "<<totalPrice1<<endl;
      
             }
   void itemUpdate()
   {
     cout<<"\n How do you like to update\n ";
     cout<<" 1. ADD \n 2. SELL \n";
     cin>>k;
     if(k==1)
    {
       cout<<"\n Enter Number to add\n";
       cin>>add;
       if(add>0)
       {
         quantity += add;
       cout<<"Now Final Quantity = "<<quantity<<endl;
        totalPrice = quantity * price ;
      cout<<"Total Price "<<totalPrice<<endl;
       }
        else
         {
        cout<<"\nInvalid Entry in add\n";
       }
      
    }
    else if(k==2)
    {
        cout<<"\n Enter Number to sell\n";
       cin>>add;
       if( add <= quantity)
       {
       quantity -= add;
       cout<<"Now Final Quantity = "<<quantity<<endl;
       totalPrice = quantity * price ;
      cout<<"Total Price "<<totalPrice<<endl;
       }
       else 
       {
        cout<<"\nInvalid Entry in sell\n";
       }
    }
    }
   
};
int main()
{
    int j,m=1,n,p,y=1;
    item sample;
    sample.sampleDisplay();
    cout<<"\nHow many items\n";
    cin>>n;
    item i[n];
    for(j=0;j<n;j++)
    {
        i[j].itemEntry();
    }
    while(m==1)
    {
        cout<<"\n Enter ID to display item Record \n";
        cin>>p;
        i[p-1].itemDisplay();

        cout<<"\nDo you want to Continue \n";
        cout<< "1. Yes \n 2.No \n";
        cin>>m;
    }
    while(y==1)
    {
        cout<<"\n Enter ID to update in item Record \n";
        cin>>p;
        i[p-1].itemUpdate();

        cout<<"\nDo you want to Continue \n";
        cout<< "1. Yes \n 2.No \n";
        cin>>y;
    }
}


