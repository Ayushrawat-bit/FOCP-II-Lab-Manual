#include <iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int scode, track[1000] = {0},i;
	int max=0,count=0;
	for(int i=0;i<N;i++)
	{
		cin>>scode;
		track[scode]++;
		if(max<track[scode])
		max=track[scode];
	}
	for(i=0;i<=1000;i++)
	{
		if(track[i]==max)
		count++;
	}
	cout<<count;
}