#include<iostream>
using namespace std;

class complex
{
	int real;
	int img;

	public:
		void get_data()
		{	
			int r,i;
			cout<<"Complex Number :: "<<endl<<"Real Part :: "<<endl;
			cin>>r;
			cout<<endl<<"Imaginary Part :: ";
			cin>>i;
			real=r;
			img=i;
		}

		void display()
		{
			cout<<real<<" + j"<<img<<endl;
		}

		void add_real(int r)
		{
			real=real+r;
		}

		void sub_real(int r)
		{
			real=real-r;
		}

		void add_img(int r)
		{
			img=img+r;
		}

		void sub_img(int r)
		{
			img=img-r;
		}
};

int main()
{
	complex c;
	c.get_data();
	int in;
	do
	{
		cout<<"1.ADD/SUBTRACT REAL NUMBER"<<endl;
		cout<<"2.ADD/SUBTRACT IMAGINARY NUMBER"<<endl;
		cout<<"3.DISPLAY"<<endl<<" Enter";
		cin>>in;
		switch (in)
		{
			case 1:
				int g;
				cout<<"1. ADD"<<endl<<"2. SUBTRACT"<<endl<<"ENTER : ";
				cin>>g;
				switch (g)
				{
					case 1:
						int t;
						cout<<"Enter the number :: ";
						cin t;
						c.add_real(t);
						break;
					case 2:
						int t;
						cout<<"Enter the number :: ";
						cin t;
						c.sub_real(t);
						break;
				}
				break;

			case 2:
				int g;
				cout<<"1. ADD"<<endl<<"2. SUBTRACT"<<endl<<"ENTER : ";
				cin>>g;
				switch (g)
				{
					case 1:
						int t;
						cout<<"Enter the number :: ";
						cin t;
						c.add_img(t);
						break;
					case 2:
						int t;
						cout<<"Enter the number :: ";
						cin t;
						c.sub_img(t);
						break;
				}
				break;

			case 3:
				c.display();
				break;
			case 4:
				break;
			default:
				cout<<"Wrong Input !!"<<endl;
		}
		while (in!=4);
	}
	return 0;
}
