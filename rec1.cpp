// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
struct{
    int roll;
    char name[40];
    int marks;
} stu[3];

int main() {
  int i;
  for(i=0;i<3;i++)
  {
      cin>>stu[i].roll;
      cin>>stu[i].name;
      cin>>stu[i].marks;
  }
 for(i=0;i<3;i++)
  {
      if(stu[i].marks>=80)
     { cout<< "grad a+";
      cout<<stu[i].roll;
      cout<<stu[i].name;
      cout<<stu[i].marks;
     }

      else if(stu[i].marks<=80&&stu[i]>=70)
     { cout<< "grad a";
      cout<<stu[i].roll;
      cout<<stu[i].name;
      cout<<stu[i].marks;
     }

       else if(stu[i].marks<=70&&stu[i]>=60)
     { cout<< "grad a-";
      cout<<stu[i].roll;
      cout<<stu[i].name;
      cout<<stu[i].marks;
     }
      else if(stu[i].marks<=60&&stu[i]>=50)
     { cout<< "grad b";
      cout<<stu[i].roll;
      cout<<stu[i].name;
      cout<<stu[i].marks;
     }
      else if(stu[i].marks<=50&&stu[i]>=40)
     { cout<< "grad c";
      cout<<stu[i].roll;
      cout<<stu[i].name;
      cout<<stu[i].marks;
     }

    else

     { cout<< "fail";
      cout<<stu[i].roll;
      cout<<stu[i].name;
      cout<<stu[i].marks;
     }
  }
    return 0;
}
