#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

float power(int n,int m)
{
	return pow(n,m);
}

float power(int n,double d)
{
	return pow(n,d);
}

int main()
{
	int n,m;
	double d;
	char s[5];
	cout<<"Is power a float ? (yes/no) "<<endl<<"Ans = ";
	cin>>s;
	cout<<"Enter value and power :: ";
	if (strcmp(s,"yes")==0)
	{
		cin>>n>>d;
		cout<<n<<" raise to power "<<d<<" is :: "<<power(n,d);
	}
	else
	{
		cin>>n>>m;
		cout<<n<<" raise to power "<<m<<" is :: "<<power(n,m);	
	}
	
	return 0;
}