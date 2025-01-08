#include <bits/stdc++.h>
using namespace std;
int main()
{ 
	int a[7]={-1,2,0,6,8,9,3};

	int min1=INT_MAX;
	int min2=INT_MAX;

	for(int i=0;i<7;i++)
	{
		if(min1>a[i])
		{
			min1=a[i];
		}
	}
	for(int i=0;i<7;i++)
	{
		if(a[i]>min1&&min2>a[i])
		{
			min2=a[i];
		}
	}

     cout<<"2nd MIN ="<<min2;
	return 0;
}