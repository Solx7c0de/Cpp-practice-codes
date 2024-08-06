#include <iostream>
#include <cmath>
using namespace std;
// fibonacci sequence till n terms,


// void fib (int num)
// {  int a = 0, b = 1, sum = 0, i;
//   for(i=1; i<=num; i++)
//   {
//     cout<<a<<" ";
//     sum = a+ b;
//     a =b;
//     b = sum;
//   }
// }
// int main()
// {   
//    int n;

//    cout<<" enter the number of terms of fibonacci sequence to be printed"<<endl;
//    cin>>n;

//    fib(n);

// }


// Advance placement problems.ḍ

//  1) sum of first n natural numbers

// void nat (int n)
// {
//     int sum;
//     sum= n*(n+1)/2;
//     cout<<"the sum of first "<<n<<" natural numbers is: "<<sum;
// }


// int main()
// {  
//     int a;
//     cout<<"enter a number"<<endl;
//     cin>>a;

//     nat(a);

//     return 0;
// }


//  2) pythagorean triplet check


// int sqsum ( int num1,int num2)
// {int sprodct;

// sprodct = powf(num1,2) + powf(num2,2);
// return sprodct;

// }
// bool pyth(int x,int y,int z)
// {  int greatest, comp, g2;
//    if(x>y)
//    {
//     if(x>z)
//     {
//       greatest= x;
//      comp = sqsum(y,z);
//     }
//     else {
//     greatest =z;
//    comp = sqsum(x,y);
//    }
//    }

//    else if(y>z)
//    {
//     greatest = y;
//    comp = sqsum (x, z);
//    }
//    else
//    {
//      greatest =z;
//     comp = sqsum(x, y);
//    }
//    g2= powf(greatest,2);

//    if(g2 == comp)
//    {
//     return true;
//    }
//    else
//    { return false;
//    }
   
// }
// int main()
// {

//     int a, b, c;
//     cout<<"enter 3 numbers : "<<endl;
//     cin>>a>>b>>c;

//     if (pyth(a,b,c))
//     {
//         cout<<"the numbers are a pythagorean triplet";
//     }
//     else{
//         cout<<"the numbers arent a pythagorean triplet";
//     }
    

//     return 0;
// }


// 3)  binary sum
int rev (int a)
{  int rev=0;

   while(a>0)
        {
            rev = (rev*10) + (a%10);
               a/=10;
        }
    return rev;
}

int binsum(int x, int y, int z)
{   int lastx, lasty, lastf, sum =0, carry =0, finnum =0, rev =0, p;
    
    while(z>0)
    {
        lastx = x%10;
        x/= 10;
        lasty = y%10;
        y/= 10;
        sum += (lastx + lasty + carry);

        if(sum == 0)
        {
          lastf = 0;
        }
        else if(sum == 1)
        {
          lastf = 1;
        }
        else if(sum == 2)
        {
          lastf = 0;
          carry = 1;
        }
        else if(sum == 3)
        {
          lastf = 1;
          carry = 1;
        }
        
        finnum = (finnum*10) + lastf;
        
    }
     
    if(carry == 1)
        {
         finnum *= 10;
         finnum+=1;
        }
      p = rev(finnum);
      return p;
       
}


int main()
{    int a, b, l;
    cout<<"enter two binary nums"<<endl;
    cin>>a>>b;
    cout<<"enter length of the numbers"<<endl;
    cin>>l;
    

   cout<<"the sum of : "<<a<<" and "<<b<< " is "<<binsum(a, b, l);

   return 0;
}



