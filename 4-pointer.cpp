
#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){// receive the values of x and y from the main function using pointer operator. (*) sign are used
                        //as pointer operator
    int temp;
    temp = *a;// swapping started
    *a = *b;
    *b = temp;
    cout<<*a<<" "<<*b; // result after swapping is a = 10 and b = 5
}
int main(){
    int A = 5,B=10;

    int &a = A; // setting the memory address of x and y to a and b;
    int &b = B;
    swap(&a,&b);//pass the values of a snd b to the function swap with the references
}
