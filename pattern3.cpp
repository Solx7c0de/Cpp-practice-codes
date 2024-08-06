#include <iostream>
using namespace std;

int main()
//  index based element problem, with 1 printed in each place where sum of indices is even**
// {   
//     int i, j, n;

//     cout<<"enter value"<<endl;
//     cin>>n;

//     for (i=1; i<=n; i++)
//     {
//         for (j=1; j<=(n-i+1); j++)
//         {
//             cout<<j<<" ";
//         }

//         cout<<endl;
//     }

//      return 0;
// }



// 

// rhombus pattern

// {
//     int i, j, k, n;

//     cout<<"enter value"<<endl;
//     cin>>n;

//     for(i=1; i<=n; i++)
//     {
//         for(j=n; j>i; j--)
//         {
//          cout<<" ";
//         }

//          for(k=1; k<=n; k++)
//         {
//         cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


// palindromic pattern

// {    int i, j, k, l, n;
//      cout<<"enter value"<<endl;
//      cin>>n;


//     for(i=1; i<=n; i++)
//     {
//         for(j=1;j<=(n-i);j++)
//         {
//             cout<<"  ";
//         }
//         for(k=i;k>=1; k--)
//         {
//             cout<<k<<" ";
//         }
//         if( i!= 1)
//         {
//             for(l=2; l<=i; l++)
//                {
//                  cout<<l<<" ";
//                }
//         }

//         cout<<endl;
//     }

//     return 0;
// }


// zigzag pattern for 9 stars; visually reffered index problem; no general logic.

{   for (int i=1; i<=3; i++)
    {
       for (int j=1; j<=9; j++)
        {
            if ( (i+j)%4 == 0)
            {
                cout<<"*";
            } 
            else if(i== 2 && j%4 == 0)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
        cout<<endl;
    }
    return 0;
}