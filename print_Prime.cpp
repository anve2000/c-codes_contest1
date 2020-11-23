#include<iostream>
using namespace std;
int main()
{
	int i,n,j,count;
	cin>>n;
	i=2;
	while(i<=n)
	{
	    count=0;
		j=2;
		while(j<i)
         {
			if(i%j==0)
			{
				count++;
				j=i;
			}
			j++;
		}
		 if(count==0)
			 {
				 cout<<i<<endl;
			 }
			 i++;
	}
	return 0;
}
