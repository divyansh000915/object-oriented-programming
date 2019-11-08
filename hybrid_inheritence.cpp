#include<iostream>
using namespace std;

class A
{
	public :
		void display()
		{
			cout<<"Hello I am in A"<<endl;
		}
};

class B
{
	public :
		void display()
		{
			cout<<"hello I am in B "<<endl;
		}
};

class C: public A,public B
{
	public :
		void display()
		{
			A::display();
			B::display();
			cout<<"hello I am in c "<<endl;
		}
};

class D
{
	public :
		void display()
		{
			cout<<"hello now in d"<<endl;
		}
};

class E : public C,public D
{
	public :
		void display()
		{
			C :: display();
			D :: display();
			cout<<"My final destination is :: E";
		}
};
int main(int argc, char const *argv[])
{
	E s;
	s.display();
	return 0;
}