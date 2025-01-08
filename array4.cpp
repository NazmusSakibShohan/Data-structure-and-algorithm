// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int s[5][4];
    int i,j;
    for(i=0;i<5;i++)
     {for(j=0;j<4;j++)
       {cin>>s[i][j];}

     }

   for(i=0;i<5;i++)
   { int sum=0;
     int min=INT_MAX;
     for(j=0;j<4;j++)
       {
           sum=sum+s[i][j];
           if(min>s[i][j])
           {
               min=s[i][j];
           }

       } //static_cast<float>(sum);
           float avg=((float)sum-min)/2.0;
           cout<<avg<<endl;
   }
    return 0;
}
