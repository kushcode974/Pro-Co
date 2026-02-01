#include<iostream>
using namespace std;
static int i=0;
class Product
{
   private: 
   int id,add, sell , quantity,price,total,c;
   string name;
   public:
   void addNewProduct()
   {

    id=++i;
    cout<<"Product Name ";
    cin>>name;
    cout<<"Product ID ";
    cin>>id;
     cout<<"Product Price ";
     cin>>price;
      cout<<"Product Quantity ";
      cin>>quantity;
      total = quantity * price;
cout<<" \nTotal Price "<<total<<endl;

   }
   void showProduct()
   {
    cout<<"\nProduct Name "<<name;
    cout<<"\nProduct ID "<<id;
     cout<<"\nProduct Price "<<price;
      cout<<"\nProduct Quantity "<<quantity<<endl<<endl;

   }
   void totalPrice()
   {
total = quantity * price;
cout<<"Total Price\n"<<total;
   }
   void update()
   {
    cout<<"1. For add \n 2. For sell\n";
cin>>c;
if(c==1)
   {
    cout<<"\n How many Products to add? ";
    cin>>add;
    add += quantity;
    cout<<"\nTotal Products "<<add<<endl;
   }
   else if(c==2)
   {
    cout<<"\nHow many Products to sell? ";
    cin>>sell;
    sell -= quantity;
     cout<<"\nTotal Products "<<sell<<endl;
   }
   else {
    cout<<" Invalid entry\n";
   }
}
   
};
int main()
{
    int j,k,n,t,m,v,z;
    cout<<"How many Products ";
    cin>>n;
    Product p[n];
    for(j=0;j<n;j++)
    {
        p[j].addNewProduct();
    }
    cout<<"Do you want to  see any product list then \n 1.Yes \n 2.No";
    cin>>v;
     while(v==1)
     {
    cout<<"\nDo you want to see any Product List then give us ID of Product\n";
    cin>>m;
    p[m-1].showProduct();
    cout<<"Do you want to again see any product list then \n 1.Yes \n 2.No";
    cin>>v;
     }
     while(z==1)
     {
    cout<<"Do you want to make in changes in product like Price   \n 1. For Yes \n 2. For No\n";
    cin>>k;
    if(k==1)
    {
        cout<<"\n then tell us the ID of product??  ";
      cin>>t;
       p[t-1].update();
    }
    else if(k==2)
    {
      cout<<"";
    }
    else
    {
      cout<<"Invalid entry";
    }
    return 0;
    cout<<"Do you want to make again update in product then \n 1.Yes \n 2.No\n";
    cin>>z;
   }
}




/* 
1. always rhink that you have to make code look good and output specfically 
then while coding think of \n and <<endl continuosoly while working with cout 
and thinking of what it would look like in output 
2.after writing whole code don't go for running and building 
just do a quick thing like read code line by line and think of what could execute in language of code in 
these chances of getting error in 1st build and run would reduce.
3.always use good names not like 
eg. quan - X 
    quantiy - good remember what was point 1
    and also all name you create like function name , any datatype name
4. when calling function just make sure you call right function not wrong one these can be solved
following point 2.    
*/