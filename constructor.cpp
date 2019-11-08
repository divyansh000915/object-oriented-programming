#include<iostream>
using namespace std;

class integer
{
	int m,n;
	public:
		integer()   // NO ARGUMENT
		{
			m=2;   n=3;
		}

		integer(int x)  //ONE ARGS
		{
			m=x;	n=x;
		}

		integer(int x,int y)	// TWO ARGS
		{
			m=x;	n=y;
		}


		integer(integer &d,integer &s)
		{
			n=d.m;		m=s.n;
		}

		void display()
		{
			cout<<"n == "<<n;
			cout<<endl<<"m == "<<m<<endl<<endl;
		}

};



int main()
{
	integer A;
	cout<<"1. NO ARGUMENTS"<<endl;
	A.display();
	cout<<"2. ONE ARGUMENTS"<<endl;
	integer B(12);
	B.display();
	cout<<"3. TWO ARGUMENTS"<<endl;
	integer C(10,20);
	C.display();
	cout<<"4. COPY CONSTRUCTOR"<<endl;
	integer D(C);
	D.display();
	integer E(D,C);
	cout<<"5. DYNAMIC CONSTRUCTOR"<<endl;
	E.display();
	return 0;
}