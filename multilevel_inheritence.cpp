//MULTI-LEVEL INHERITENCE
#include<iostream>
using namespace std;

class Student
{
	
	public :
		int roll;
};

class Test : public Student
{
	public :
		int m1, m2 ;
};

class Result : public Test
{
	public :
		void get_roll()
		{
			cout<<"ENTER ROLL NO. ::";
			cin>>roll;
		}

		void get_marks()
		{
			cout<<"ENTER MARKS OF TWO SUBJECTS  :: ";
			cin>>m1>>m2;
		}

		void display()
		{
			cout<<"ROLL NUMBER :: "<<roll<<endl;
			cout<<"TOTAL MARKS :: "<<m1+m2<<endl;
		}
};

int main()
{
	Result r;
	r.get_roll();
	r.get_marks();
	r.display();
	return 0;
}