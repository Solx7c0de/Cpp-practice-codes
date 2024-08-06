#include<iostream>
using namespace std;

// int main(){
    
//     int sum;
//     cin>>sum;



    
//     if (sum>10)
//         if(sum<20)
//           {cout<<"yes";}
//         else
//           {cout<<"yeahhh";}

//     else 
      
//        {cout<<"no";}
    
//     return 0;
// }

int main(){

  int n,m,l;

  cin>>n;
  cin>>m;
  cin>>l;

  if(n>l)
        if(n>m){ cout<<n;}

        else{ cout<<m;}

  else if(l>m){ cout<<l;}

  else{ cout<<m<<endl;
        cout<<"no";}        

  return 0; 


}