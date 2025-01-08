// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


int main() {
     int fst,mid,las,i,n;
     cin>>n;
    int a[n];
     for(i=0;i<n;i++)
     {
        cin>>a[i];
         
     }
        
     fst=0;
     las=n-1;
     int x;
     cin>>x;
      while(fst<=las)
     {  mid=(fst+las)/2;
         if(a[mid]==x)
        {cout<<a[mid]<<" was found at position "<<mid+1;
            break;
        }
        else if(a[mid]>x)
        {
            las=mid-1;
        }
        else 
        { 
            fst=mid+1;
            
        }
     }
        

    return 0;
}