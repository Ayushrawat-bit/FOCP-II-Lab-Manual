#include<iostream>
using namespace std;
int main()
{
	long int l,r,k;
	cin>>l>>r>>k;
	int count=0;
	if(l>r)
	{
		for(int i=r;i<=l;i++)
		{
			if(i%k==0)
				count++;
		}
	}
	else
	{
		for(int i=l;i<=r;i++)
		{
			if(i%k==0)
				count++;
		}
	}
	cout<<count;
	return 0;
}