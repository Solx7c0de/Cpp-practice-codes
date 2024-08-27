#include<iostream>
using namespace std;


int reverse (int a)
{  int rev=0;

   while(a>0)
        {
            rev = (rev*10) + (a%10);
               a/=10;
        }
    return rev;
}

int binsum(int x, int y)
{   int lastx, lasty, lastf, sum =0, carry =0, finnum =0, p;
    
    while(x>0 || y>0)
    {
        lastx = x%10;
        x/= 10;
        lasty = y%10;
        y/= 10;
        sum += (lastx + lasty + carry);

        if(sum == 0)
        {
          lastf = 0;
          carry = 0;
        }
        else if(sum == 1)
        {
          lastf = 1;
          carry = 0;
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
{    int a, b;
    cout<<"enter two binary nums"<<endl;
    cin>>a>>b;
  
    

   cout<<"the sum of : "<<a<<" and "<<b<< " is "<<binsum(a, b);

   return 0;
   
}
