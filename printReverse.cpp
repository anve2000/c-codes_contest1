#include<iostream>
#include<math.h>

using namespace std;
int main() {
	int count,num,n,rem,store;
	cin>>n;
	count=0;
	store=n;
	while(n>0)
	{
		n=n/10;
		count++;
	}
	num=0;
	n=store;
	while(count>0)
    {
        count--;
        rem=n%10;
        num=num+(rem*pow(10,count));
        n=n/10;

    }
    cout<<num;
	return 0;
}
