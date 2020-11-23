#include<iostream>
using namespace std;
int main() 
{
	int n,start,end;
	cin>>n;
	if(n%2==0)
	{
		start=n-1;
		end=n;
	}
	else
	{
		start=n;
		end=n-1;
	}
	while(start>=1)
	{
		cout<<start<<endl;
		start=start-2;
	}
	start=start+3;
	while(start<=end)
	{
		cout<<start<<endl;
		start=start+2;
	}
	return 0;
}
