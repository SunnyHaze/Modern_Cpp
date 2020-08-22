#include<iostream>
using namespace std;
int main()
{
	int x,s=0,m=1; 
	cin>>x;
	do
	{
		s=x%10+s;
		m=x%10*m;	
		x=x/10;
	}while(x>0);
	cout<<"和为："<<s<<"\n积为：" <<m;
}
