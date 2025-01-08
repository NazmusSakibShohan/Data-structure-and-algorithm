// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
struct{
    int roll;
    char name[40];
    int marks[3];
} stu[3];

int main() {
  int i,j;
  for(i=0;i<3;i++)
  {
      cin>>stu[i].roll;
      cin>>stu[i].name;
      for(j=0;j<3;j++)
      cin>>stu[i].marks[j];
  }
 for(i=0;i<3;i++)
  { int min =INT_MAX;
  int sum=0;
      for(j=0;j<3;j++)
      {
          sum=sum+stu[i].marks[j];
          if(min>stu[i].marks[j])
          {
              min=stu[i].marks[j];
          }
      }
      float avg;
       avg=static_cast<float>(sum-min)/2;
       cout<< avg<<endl;
       cout<<stu[i].name<<endl;
       cout<<stu[i].roll<<endl;

  }
    return 0;
}
