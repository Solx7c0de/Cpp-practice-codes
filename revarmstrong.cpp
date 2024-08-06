#include <iostream>
#include <cmath>
using namespace std;
int main()
// {   int n, rev=0;
//     cout<<" enter a number";
//     cin>>n;

//     while(n>0)
//     {
//         rev = (rev + (n%10));  // optimum solution is rev*10 + n%10; which has better time complexity
//         if(n>10)
//         {
//             rev*=10;
//         }
//         n/=10;
//     }

//     cout<<rev;
//     return 0;


// }



// armstrong number

{
    int n, m, cubesum = 0;
    cout<<"enter a number to check if it is armstrong or not"<<endl;
    cin>>n;
    m=n;

while(n>0)
{    int a = n%10;
    cubesum += powf(a,3);
    n/=10;
}

if(m == cubesum)
{
    cout<<" armstrong number";
}
else{
    cout<<" not an armstrong number";
}

return 0;
}