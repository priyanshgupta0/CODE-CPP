#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n* factorial(n-1);

}
int main(int argc, char const *argv[])
{
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    cout<<"The value of "<<a<<"! is "<<factorial(a);
    return 0;
}
