#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,i;
    int y=1;
    cout<<"Enter the number"<<endl;
    cin>>x;
    /*if (x==0)
    {
        cout<<"Factorial is 1";
    }
    else*/
        for (i = 1; i <= x; i++)
        {
            y=i*y;
        }
        cout<<"Factorial is "<<y<<endl;
    
return 0;
}