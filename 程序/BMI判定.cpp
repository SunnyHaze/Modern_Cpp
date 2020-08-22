#include<iostream>
using namespace std;
int main()
{
	double h,m,BMI;
	cout<<"请输入身高,以米为单位"<<endl;
	cin>>h;
	cout<< "请输入体重,以千克为单位"<<endl;
	cin>>m;
	
	BMI=m/h/h;
	cout<<BMI<<endl;
	// if(BMI<18.5)
	// {
	// 	cout<<"偏轻";
	// }
	// else
	// {
	// 	if(BMI<=24)
	// 	{
	// 		cout<<"正常";
	// 	}
	// 	else
	// 	{
	// 		cout<<"超重"; 
	// 	}	  
	// } 
	 return 0;
	 system("pause"); 
	 
}
