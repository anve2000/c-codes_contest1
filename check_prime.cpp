#include<iostream>
using namespace std;
int main() {
	int n,i;
	cin>>n;
	i=2;
	while(i<n)
	{
		if(n%i==0)
		{
			cout<<"Not Prime"<<endl;
			return 0;
		}
		i++;
	}
	cout<<"Prime"<<endl;
	return 0;
}
