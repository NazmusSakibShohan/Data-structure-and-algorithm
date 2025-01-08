#include <bits/stdc++.h>
using namespace std;
int main()
{    int n;
     cin>>n;
	int a[n][n];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}

	int max1=INT_MIN;
	int max2=INT_MIN;

//min1 define
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			{  if(i==0||j==0||i==n-1||j==n-1)
		        {
					if (max1<a[i][j])
					{max1=a[i][j];}
				}
			}
	}

//min2	define
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			{  if(i==0||j==0||i==n-1||j==n-1)
		        {
					if (max1>a[i][j]&&a[i][j]>max2)
					{max2=a[i][j];}
				}
			}
	}
     cout<<"2nd MAN ="<<max2;
	return 0;
}
