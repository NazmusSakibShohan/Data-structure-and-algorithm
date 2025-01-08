#include <bits/stdc++.h>
using namespace std;
int main()
{ 
	int a[7]={2,4,1,6,8,9,3};

	int max1=INT_MIN;
	int max2=INT_MIN;

//1st max
	for(int i=0;i<7;i++)
	{
		if(max1<a[i])
		{
			max1=a[i];
		}
	}
//2nd max	
	for(int i=0;i<7;i++)
	{
		if(a[i]<max1&&a[i]>max2)
		{
			max2=a[i];
		}
	}

     cout<<"2nd MAX ="<<max2;
	return 0;
}