#include<iostream>
using namespace std;
float reverse (int a)
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
        else
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
    p = reverse (finnum);
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
