#include<iostream>
using namespace std;

class integer
{
    int m,n, *p;
    public:
        integer()   // NO ARGUMENT
        {
            m=2;   n=3;
            p=NULL;
        }

        integer(int x)  //ONE ARGS
        {
            m=x;    n=x;
            p=NULL;
        }

        integer(int x,int y)    // TWO ARGS
        {
            m=x;    n=y;
            p=NULL;
        }


        integer(integer &d,integer &s) // COPY CONSTRUCTOR
        {
            n=d.m;        m=s.n;
            p=NULL;
        }

            integer (int x, int y, int z) // DYNAMIC CONSTRUCTOR
        {
            m=x;
            n=y;
            p = new int;
            *p=z;
        }
    
        void display()
        {
            cout<<endl<<"m = "<<m<<endl;
            cout<<"n = "<<n<<endl;
            if (p!=NULL) cout << "p = " << *p<<endl;
        }

};



int main()
{
    integer A;
    cout<<"1. NO ARGUMENTS"<<endl;
    A.display();
    cout<<"\n2. ONE ARGUMENTS"<<endl;
    integer B(12);
    B.display();
    cout<<"\n3. TWO ARGUMENTS"<<endl;
    integer C(10,20);
    C.display();
    cout<<"\n4. COPY CONSTRUCTOR"<<endl;
    integer D(C);// Calling the implicit copy constructor automatically provided by compiler
    //Hence not needed in this prgram*/
    integer E(D,C);// calling the copy constructor declared by us, which is not a dynamic constructor
    D.display();
    
    E.display();
    cout<<"\n5. DYNAMIC CONSTRUCTOR"<<endl;
    integer F (10,20,30);
    F.display();
    return 0;
}
