#include<iostream>
using namespace std;
int main () {
	int n,col,row;
	cin>>n;
	row=1;
	while(row<=n)
	{
		col=1;
		while(col<=row)
		{
			cout<<row<<" ";
			col++;
		}
		while(col<=n)
		{
			cout<<col<<" ";
			col++;
		}
		row++;
		cout<<endl;
	}
	return 0;
}
