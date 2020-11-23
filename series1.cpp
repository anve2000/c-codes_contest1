#include<iostream>
using namespace std;
int main() 
{
	int n1,n2,i,num,count;
	cin>>n1;
	cin>>n2;
    i=0;
	count=1;
	while(count<=n1 && ++i)
	{
		num=3*i+2;
        if(num%n2!=0)
        {
        	cout<<num<<endl;
        count++	;
        }
	}

	return 0;
}
