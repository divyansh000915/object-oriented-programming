//MULTIPLE-INHERITENCE
#include<iostream>
using namespace std;

class A
{
	protected :
		int m;
	public :
		void get_m(int);
};
void A :: get_m(int x)
{
	m = x;
}

class B
{
	protected :
		int n;
	public :
		void get_n(int );
};

void B :: get_n(int y)
{
	n = y;
}

class C : public A,public B
{
	public :
		void display()
		{
			cout <<"VALUE OF N = "<<n<<endl;
			cout<<"VALUE OF M = "<<m<<endl;
		}
};

int main()
{
	C ab;
	ab.get_n(2);
	ab.get_m(5);
	ab.display();
	return 0;
}