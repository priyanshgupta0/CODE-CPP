#include<iostream>

using namespace std;

int main()
{
    int age;
    cout<<"Enter your age\n";
    cin>>age;
    if (age<16)
    {
        cout<<"You can not come to the party\n";

    }
    else if (age==16)
    {
        cout<<"you are a kid you can come to the party\n";

    }
    else{
        cout<<"you can come to the party\n";
        
    }
    
    return 0;
}
