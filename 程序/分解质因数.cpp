#include<iostream>
using namespace std;
int main()
{
	int a,i=2;
	cin>>a;
	do{
		if(a%i==0)
		{
			a=a/i;
			cout<<i<<"\n";
		}
		else
		{
			i++;
		}	 
	}while(a!=1);
	
}
