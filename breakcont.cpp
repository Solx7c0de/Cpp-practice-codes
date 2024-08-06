#include<iostream>
using namespace std;


 int main(){

// int i;

// for(i=1;i<=100;i++)
// {
//     if(i==52)
//     {
//         break;
//     }
//      if(i%2==0)
//     {
//         continue;
//     }
   
//     cout<<i;
// }

// return 0;
// }

// 

int i, a, b, j;

cin>>a;
cin>>b;

for (i=a; i<=b; i++)
{
   for(j=2;j<=i;j++)
   {
      if(i%j==0)
      {
         break;
      }
   }
    if(j==i)
    {
      cout<<i;
    }
}
 return 0;
}