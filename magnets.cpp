#include <iostream>
using namespace std;
int main(){
long long int n, a[100000], count=1;
cin >> n;
for(int i=0; i<n; i++){
    cin >> a[i];
}
for(int i=1; i<n; i++){
    if(a[i]==10 && a[i-1]==01) {count++;}
    else if(a[i]==01 && a[i-1]==10) {count++;}
}
cout << count;
return 0;
}