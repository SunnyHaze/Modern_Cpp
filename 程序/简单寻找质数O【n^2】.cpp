#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	int a,i,n,X=0;
	cin>>n;
	for(a=1;a<=n;a++)
	{
		X=0;
		for(i=2;i<=sqrt(a);i++)
		{
			if(a%i==0) {X=1;break;}
		}
		 if(X==1){}
		 else
		 {cout<<a<<" ";}
		 
	}
	system("pause");
}

