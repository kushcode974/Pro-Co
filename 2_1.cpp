#include<iostream>
using namespace std;
static int i=0;
class rectangle
{
 private :
 float breadth , height, b1 ,h1;
 float area , a1;
 float perimeter, p1;
 int id1,id2;
 int d;

 public:
 void display()
 {
    cout<<"\nArea "<<area<<endl;
 cout<<"\n Perimeter "<<perimeter<<endl;

 }
 
 void areaOf(float b, float h)
 {
    id1=++i;
    cout<<"\nEnter ID"<<"\n";
    cin>>id1;

    breadth=b ;
    height=h;
     
    area = height * breadth;
cout<<"\n Area "<<area<<endl;
 }
 void perimeterOf(float b , float h )
 {
    

    breadth=b;
    height=h;
     
    
    perimeter = 2 * (height + breadth);
    cout<<"\n Perimeter "<<perimeter<<endl;
 }
 void update()
 {
    cout<<"\nWhat do you want to change\n";
    cout<<"1. for breadth \n 2. for height \n 3. for both \n";
    cin>>d;
    if(d==1)
    {
       cout<<"Enter breadth";
       cin>>b1;
       a1= b1 * height;
       cout<<"\n Area "<<a1<<endl;
       p1 = 2 * (height + b1);
    cout<<"\n Perimeter "<<perimeter<<endl;
 }
    else if(d==2)
    {
        cout<<"Enter height";
        cin>>h1;
        a1 = breadth * h1;
        cout<<"\n Area "<<a1<<endl;
        p1 = 2 * (h1 + breadth);
    cout<<"\n Perimeter "<<perimeter<<endl;
 }
    
    else if(d==3)
    {
         cout<<"Enter breadth";
       cin>>b1;
       cout<<"Enter height";
        cin>>h1;
       a1= b1 * h1;
       cout<<"\n Area "<<a1<<endl;
       p1 = 2 * (h1 + b1);
    cout<<"\n Perimeter "<<perimeter<<endl;
 }

    
    else{
        cout<<"\nInvalid "<<endl;

    }
    }
 };

int main()
{
    int n,j,p=1,m=1;
    float b, h,k1;
    int k;
    cout<<"\nHow many rectangles ";
    cin>>n;
    rectangle r[n];

    for(j=0;j<n;j++)
    {
        cout<<"Enter Your Breadth and Height of Rectangle:"<<endl;
        cin>>b;
        cout<<"";
        cin>>h;cout<<endl;
        r[j].areaOf(b ,h );
         r[j].perimeterOf(b ,h );
    }
    cout<<"Now comes displaying";
while(p==1)
{
    cout<<" \n Displaying \n";
    cout<<"\n 1. for Area and  For Perimeter";
    
        cout<<"\nEnter ID of Rectangle to display\n";
        cin>>k;
        r[k-1].display();

        cout<<" \n Do you want to see Rectangle details again then \n ";
        cout<<"1. For yes \n 2. No \n";
        cin>>p;

}
cout<<"\nNow comes update stuff\n ";
while(m==1)
    {
        cout<<"\nUpdate\n";
        cout<<"\nEnter ID of Rectangle to change its dimension\n";    
        cin>>k;
        r[k-1].update();
        cout<<" \n Do you want to see Rectangle details then \n ";
        cout<<"1. For yes \n 2. No \n";
        cin>>m;
}
}