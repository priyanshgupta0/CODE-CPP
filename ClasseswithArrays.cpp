#include <bits/stdc++.h>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};
void shop ::setprice(void)
{
    cout << "Enter id of your itemid " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "Enter id of your itprice\n";
    cin >> itemprice[counter];
    counter++;
}
void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id " << itemid[i] << "is " << itemprice[i] << endl;
    }
}
int main()
{
    shop store;
    store.initcounter();
    store.setprice();
    store.setprice();
    store.setprice();
    store.setprice();
    store.displayprice();

    return 0;
}