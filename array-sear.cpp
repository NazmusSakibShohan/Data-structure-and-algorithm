// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


int main() {
     int i,n;
     cin>>n;
    int a[n];
     for(i=0;i<n;i++)
     {
        cin>>a[i];}
        
    int x=7;        
        for(i=0;i<n;i++)
     { 
         if(a[i]==x)
        {cout<<a[i]<<" was found at position "<<i+1;
            break;
        }
     }
        

    return 0;
}