#include <iostream>
using namespace std;
int main()
   { 

//  Basic triangles straight, inverted, etc.
//   int i, j, k, m, n;

//     cout<<"enter rows";
//     cin>>n;

//     cout<<"enter columns";
//     cin>>m;

//     for(i=1;i<=n;i++)
//     {
//         if(i==1 || i==n)
//         {
//             for(k=1;k<=m;k++)
//             {
//                 cout<<"*";
//             }

//             cout<<endl;
//         }
//         else {

//         for(j=1;j<=m;j++)
//         {
//             if(j==1) 
//             {
//                 cout<<"*";
//             }
//             else if(j==m)
//             {
//                 cout<<"*"<<endl;
//             }
//            else
//            {
//                 cout<<" ";
//            } 
//         }

    int i, j, n, k=1;
    cout<<"enter value";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
          cout<<k<<" ";
          k++;
        }
    

        cout<<endl;
        }
    

    return 0;
}