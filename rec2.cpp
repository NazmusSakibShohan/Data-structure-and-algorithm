// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
struct{
    int id;
    char name[40];
    int pay;
} per[5];

int main() {
  int i;
  float hr;
  for(i=0;i<5;i++)
  {
      cin>>per[i].id;
      cin>>per[i].name;
      cin>>per[i].pay;
  }
 for(i=0;i<5;i++)
  {
      if(per[i].pay<=10000)
     { hr=0.45*per[i].pay;
     }

     if(per[i].pay>=10000&&per[i].pay<=20000)
     { hr=0.40*per[i].pay;
     }
     if(per[i].pay>20000)
     { hr=0.35*per[i].pay;
     }
      float ta=0.05*per[i].pay;
      int ma=2000;
      float pf=0.1* per[i].pay;
      int  gpay,npay;
      gpay=per[i].pay+hr+ta+ma;
      npay=gpay-pf;
      cout<<"gross"<<gpay<<endl;
      cout<<"net"<<npay<<endl;
  }
    return 0;
}
