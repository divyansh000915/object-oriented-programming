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
            cout<<"Enter the Complex Number"<<endl<<"Real Part : ";
            cin>>r;
            cout<<"Imaginary Part : ";
            cin>>i;
            real=r;
            img=i;
        }

        void display()
        {
            cout<<real<<" + "<<img << 'i'<<endl;
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
    int in,t,g;
    do
    {
        cout << "\nPress\tFor";
        cout<<"\n1.   \tADD/SUBTRACT REAL NUMBER"<<endl;
        cout<<"2.   \tADD/SUBTRACT IMAGINARY NUMBER"<<endl;
        cout<<"3.   \tDISPLAY THE COMPLEX NUMBER"<<endl;
        cout<<"4.   \tExit"<<endl<<"Enter Your Choice : ";
        cin>>in;
        switch (in)
        {
            case 1:
                
                cout<<"\n1. ADD"<<endl<<"2. SUBTRACT"<<endl<<"ENTER : ";
                cin>>g;
                switch (g)
                {
                    case 1:
                        
                        cout<<"\nEnter the real number : ";
                        cin>>t;
                        c.add_real(t);
                        break;
                    case 2:
                        
                        cout<<"\nEnter the real number :: ";
                        cin >> t;
                        c.sub_real(t);
                        break;
                }
                break;

            case 2:
                
                cout<<"\n1. ADD"<<endl<<"2. SUBTRACT"<<endl<<"ENTER : ";
                cin>>g;
                switch (g)
                {
                    case 1:
                        
                        cout<<"\nEnter the imaginary number : ";
                        cin>>t;
                        c.add_img(t);
                        break;
                    case 2:
                        
                        cout<<"\nEnter the imaginary number : ";
                        cin>>t;
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
                cout<<"\nERROR...!!! Wrong Choice!"<<endl;
        }
        
    }while (in!=4);
    return 0;
}
