#include<iostream>
using namespace std;
static int i=0;
class student 
{
private:
string name;
int rollNumber,marks1,marks2,marks3,j;
float avgMarks;

public:
// void sampleDisplay()
// {
//     string name1[15];
// int rollNumber1,m1,m2,m3;
// float avgMarks1;

// name1=kallisto;
// rollNumber1=0;
// m1=56;
// m2=60;
// m3=89;
//  cout<<"\nStudent Name "<<name1<<endl;
//     cout<<"Student Roll Number "<<rollNumber1<<endl;
    
//         cout<<"\n Enter Sub 1 Marks "<<m1;
//         cout<<"\n Enter Sub 2 Marks "<<m2;
//         cout<<"\n Enter Sub 3 Marks "<<m3;
   
//          avgMarks =( m1 + m2 + m3 ) / 3;
//         cout<<"\n Avg Marks "<<avgMarks1<<endl;
// }
void studentEntry()
{
    cout<<"\nStudent Name "<<endl;
    cin>>name;
    cout<<"Student Roll Number "<<endl;
    cin>>rollNumber;

    
        cout<<"\n Enter Sub 1 Marks ";
        cin>>marks1;

        cout<<"\n Enter Sub 2 Marks ";
          cin>>marks2;

        cout<<"\n Enter Sub 3 Marks ";
          cin>>marks3;
   
        avgMarks =( marks1 + marks2 + marks3 ) / 3;
        cout<<"\n Avg Marks "<<avgMarks<<endl;

}
void display()
{
     cout<<"\nStudent Name"<<name<<endl;
    cout<<"Student Roll Number"<<rollNumber<<endl;
    
        cout<<"\n Enter Sub 1 Marks "<<marks1;
        cout<<"\n Enter Sub 2 Marks "<<marks2;
        cout<<"\n Enter Sub 3 Marks "<<marks3;
   
        avgMarks =( marks1 + marks2 + marks3 ) / 3;
        cout<<"\n Avg Marks "<<avgMarks<<endl;

}

};

void sampleDisplay()
{
    string name1;
int rollNumber1,m1,m2,m3;
float avgMarks1;

name1="Kallisto";
rollNumber1=0;
m1=56;
m2=60;
m3=89;
 cout<<"\nStudent Name "<<name1<<endl;
    cout<<"Student Roll Number "<<rollNumber1<<endl;
    
        cout<<"\n Enter Sub 1 Marks "<<m1;
        cout<<"\n Enter Sub 2 Marks "<<m2;
        cout<<"\n Enter Sub 3 Marks "<<m3;
   
         avgMarks1 =( m1 + m2 + m3 ) / 3;
        cout<<"\n Avg Marks "<<avgMarks1<<endl;
}

int main()
{
    int a,b,c=1,n,h;
    cout<<"How many Students"<<endl;
    cin>>n;
    student s[n];
    cout<<"\nHere is the sample display of Student Record \n";
    
       sampleDisplay();
    
    
       for(b=0;b<n;b++)
       {
        s[b].studentEntry();
        cout<<"\n\n\n\n";
       }
   
   while(c==1)
   {
    cout<<"\nWhich Roll Number Details you want to see \n";
    cin>>h;
    s[h-1].display();

    cout<<"\n Do you want to see again any details of any rollnumber \n";
    cout<<"\n 1. Yes \n 2.No \n";
    cin>>c;
   }
}
// MISTAKE 1:
// Declared name as an array: string name[15]
// cin >> cannot read into an array of strings
// Each student object represents ONE student, so only ONE name is needed
// FIX: use string name;

// MISTAKE 2:
// Used cin >> name where name was an array
// cin >> works only with single variables, not arrays
// FIX: make name a single string

// MISTAKE 3:
// In sampleDisplay(), used name1 = kallisto;
// kallisto is treated as a variable, not text
// FIX: string literals must be in double quotes → "kallisto"

// MISTAKE 4:
// Declared name1 as string name1[15] for a single student
// Unnecessary array, causes same input/output issues
// FIX: use string name1;

// MISTAKE 5:
// Average calculation uses integers, so division may truncate
// (marks1 + marks2 + marks3) / 3
// FIX: use 3.0 to ensure proper float division
