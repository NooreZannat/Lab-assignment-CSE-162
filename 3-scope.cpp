#include<iostream>
using namespace std;
int A = 100;
int main()
{
    int A = 50;
    {
        int A = 20;
        cout<<"The value of k in inner block = "<<A<<endl;
        cout<<"The global value of k is = "<<::A<<endl;
    }
    cout<<"The value of k in outer block is = "<<A<<endl;
    cout<<"The global value of k is = "<<::A<<endl;
    return 0;

}
