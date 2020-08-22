#include<iostream>
using namespace std;
int main()
{
	int i=1,m,n,a1=0,a2=1;
	cin>>m;
	for(i=0;i<=m;i++)
	{
		n=a1+a2;
		a1=a2;
		a2=n;
		cout<<n<<"\n";
	}
	return 0;
 } 
