#include <iostream>

using namespace std;
int main()
//    {
    
//     int i, j, k, n;
//     cout<<"enter value";
//     cin>>n;

//     for(i=1;i<=n;i++)
//     {
//         for(j=n;j>=i-1;j--)
//         {
//           cout<<" ";
//         }
//         for(k=1;k<=i;k++)
//         {
//           cout<<"*";
//         }

//         cout<<endl;
//         }
    

//     return 0;
// }

// butterfly pattern>> @medium lvl question

{ 
   int i, j, n;
   cout<<"enter n value";
   cin>>n;


  for(i=1;i<=n;i++)
  {
    for(j=1;j<=2*n; j++)
    {
      if(j<=i || j>(2*n)-i)
      {
        cout<<"*";
      }
      else{
        cout<<" ";
      }

    }
     cout<<endl;
  }


  for(i=n; i>=1; i--)
  {
    for(j=1; j<=2*n; j++)
    {
      if(j<=i || j> (2*n)-i)
      {
        cout<<"*";
      
      }
      else{
        cout<<" ";
      }
    }

    cout<<endl;
  }
}