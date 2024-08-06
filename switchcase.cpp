#include <iostream>
using namespace std;

int main(){


   float a, b;
   
   cout<<"input 2 numbers"<<endl;
   cin>>a>>b;

   char opp;
   
   cout<<"input a valid operator";
   
   cin>>opp;


   switch (opp)
   {
   case '+':
   cout<<a + b;
   break;

   case '-':
   cout<<a - b;
   break;

   case '*':
   cout<<a * b;
   break;

   case '/':
   cout<<a / b;
   break;

   default:
   cout<<" Please enter a valid operator";
    break;
   }

   return 0;
}