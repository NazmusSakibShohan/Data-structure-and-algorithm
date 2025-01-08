#include<bits/stdc++.h>
using namespace std;
int main()
{
	long  long  n;
  long  long digi;
	cin>>n;
	int a[10]={0};

	while(n>0)
	{
		digi=n%10;
		a[digi]++;
		n=n/10;
	}

	for (int i = 0; i < 10; i++)
	{
            if(a[i]>0)
			cout<<i<<"Appears For "<<a[i]<<"Time"<<endl;


	}
	return 0;
}
