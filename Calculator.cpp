#include <iostream>
#include<conio.h>
using namespace std;

int Add(int n,int m)
{
    int sum;
    sum=n+m;
    cout<<sum;
    
}

int Sub(int n,int m)
{
    int sum;
    sum=n-m;
    cout<<sum;
}

int Mutply(int n,int m)
{
    int sum;
    sum=n*m;
    cout<<sum;
}

int Div(int n,int m)
{
    float sum;
    sum=n/m;
    cout<<sum;
}
int main()
{
   cout<<"                       Calculator"<<endl;
   int a,b,c;
   cout<<"Enter First number"<<endl;
   cin>>a;
   cout<<"Enter Second number"<<endl;
   cin>>b;
   cout<<"       Choices"<<endl;
   cout<<"1.Addition"<<endl;
   cout<<"2.Subtraction"<<endl;
   cout<<"3.Multiplication"<<endl;
   cout<<"4.Division"<<endl;
   cin>>c;
   switch(c)
   {
       case 1:cout<<"           ADDITION"<<endl;
              Add(a,b);
              break;
       case 2:cout<<"           SUBTRACTION"<<endl;
            Sub(a,b);
            break;
       case 3:cout<<"           MULTIPLICATION"<<endl;
            Mutply(a,b);
            break; 
       case 4:cout<<"           DIVISION"<<endl;
             Div(a,b);
             break;
       default:cout<<"Enter between 1-4 "<<endl;
   }
    return 0;
}