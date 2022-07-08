#include<iostream>
#include <math.h>  
using namespace std;
int main()  
{  
    int p, t;  
   double r, ci;  
  
    cout<<"\nEnter principal amount ::";  
    cin>>p;  
  
    cout<<"\nEnter rate of interest ::";  
    cin>>r;  
  
    cout<<"Enter time period\n";  
    cin>>t;  
  
  
    ci = p * pow( (1 + r / 100), t );  
  
    cout<<"Compound Interest is ::"<<ci<<endl;  
  
    return 0;  
}  
