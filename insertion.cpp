#include <iostream>
using namespace std;
int main()
{
   int i;
   int a[6]={1,2,3,6,8};
   //insert"4"in posstion 3/index 2
   //here 5 is highest index
  int poss=3-1;
      for(i=5-1;i>=poss;i--)
      {
      	a[i+1]=a[i];
      }
      a[2]=4;
     for(i=0;i<6;i++)
     {
     	cout<<a[i];
     }
      
	return 0;
}