#include <iostream>
using namespace std;
int main()
{
   int i;
   int a[4]={1,2,3,4};
   int b[4]={5,6,7,8};
   int c[8];

     for(i=0;i<4;i++)
      {	c[i]=a[i];
      }

   	 for(i=0;i<4;i++)   
      {	c[4+i]=b[i];
      }
 
 
     for(i=0;i<8;i++)
     {
     	cout<<c[i];
     }
      
	return 0;
}