#include <iostream>
using namespace std;
int main()
{
   int i;
   int a[5]={1,2,3,6,8};
   //delet"2" possition 2/index 1
   //here 4 is highest index
   int poss=2-1;
      for(i=poss;i<4;i++)
      {
      	a[i]=a[i+1];
      }
 
     for(i=0;i<4;i++)
     {
     	cout<<a[i];
     }
      
	return 0;
}