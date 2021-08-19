#include<iostream>

using namespace std;

int main(){
    int i,j=1;
    cout<<"Enter the number whose multiplacation table you want\n";
    cin>>i;

    while (j<=10)
    {
        cout<<i<<"X"<<j<<"="<<i*j<<endl;
        j++;
    }
    
}