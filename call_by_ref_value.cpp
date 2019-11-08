#include<iostream>
using namespace std;


void func1(int a,int b)  //function definition
{
	cout<<"Call by value ---->"<<endl;
	cout<<"Value Of x :: "<<a<<endl;
	cout<<"Value Of y :: "<<b<<endl<<endl;
}

void swap(int &a, int &b)
{
	int temp;
	cout<<"Call by reference ---->"<<endl;
	cout<<"Value Of x :: "<<a<<endl;
	cout<<"Value Of y :: "<<b<<endl<<endl;
	temp=a;
	a=b;
	b=temp;
}



int main()
{
	int x,y;
	cout<<"Enter the values of x and y :: ";
	cin>>x>>y;
	func1(x,y); //function call by value
	swap(x,y); //function call by reference
	cout<<"After Swapping "<<endl;
	cout<<"Value Of x :: "<<x<<endl;
	cout<<"Value Of y :: "<<y;
	return 0;
}