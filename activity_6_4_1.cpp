#include <iostream>
using namespace std;
class First{
    protected:
        int f;
    public:
        void f_input()
        {
            cout<<"Enter first integer: ";
            cin>>f;
        }
};
class Second: public First{
    protected:
        int s;
    public:
        void s_input()
        {
            f_input();
            cout<<"Enter second integer: ";
            cin>>s;
        }
};
class Third: public Second{
    protected:
        int t;
    public:
        void t_input()
        {
            s_input();
            cout<<"Enter third integer: ";
            cin>>t;
        }
        int dispMax()
        {
            return f>s && f>t? f: s>f && s>t? s: t;
        }
};
int main()
{
    Third th;
    th.t_input();
    cout<<"The greatest number is: "<<th.dispMax()<<endl;
}
