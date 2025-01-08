#include <iostream>
using namespace std;
int main()
{ 
	int a[7]={2,4,1,6,8,9,3};
	int max=a[0];
	for(int i=0;i<7;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}

     cout<<"MAX="<<max;
	return 0;
}