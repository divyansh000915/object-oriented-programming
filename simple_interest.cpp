#include<iostream>
using namespace std;

void simple(int p,int t,int r)
{
	float si;
	si=(p*r*t)/100.0;
	cout<<"Simple Interest Is :: "<<si;
}

int main()
{
	int p,r,t;
	cout<<"ENTER"<<endl;
	cout<<"PRINCIPAL :: ";
	cin>>p;
	cout<<"RATE :: ";
	cin>>r;
	cout<<"TIME :: ";
	cin>>t;
	simple(p,r,t);
	return 0;
}