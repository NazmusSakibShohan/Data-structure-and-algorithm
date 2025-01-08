#include <iostream>
using namespace std;
int main()
{ 
	int a[7]={2,4,1,6,8,9,3};
	int min=a[0];
	for(int i=0;i<7;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}

     cout<<"MIN="<<min;
	return 0;
}