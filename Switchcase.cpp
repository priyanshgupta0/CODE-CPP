#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cout<<"Enter your age\n";
    cin>>a;

    switch (a)
    {
    case 10:
        cout<<"You are 10 year old\n";
        break;
    case 15:
        cout<<"You are 15 year old\n";
        break;    
    case 20:
        cout<<"You are 20 year old\n";
        break;
    default:
        cout<<"No special case\n";
        break;
    }

    return 0;
}
