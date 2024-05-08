#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    set<int> s;
    map<int, int> map;
    unordered_map<int, int> umap;

    v.push_back(4);
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(5);
    v.push_back(6);
    v.push_back(1);

    cout << "Vector: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    for (int x : v)
    {
        // Insert each element
        // into the Set
        s.insert(x);
    }
    for (int x : v)
    {
        // Insert each element
        // into the Map
        map[x]++;
    }
    for (int x : v)
    {
        // Insert each element
        // into the UMap
        umap[x]++;
    }
    cout << "Set: ";
    for (int x : s)
    {
        cout << x << " ";
    }
    cout << "Map: " << endl;
    for (auto x : map)
        cout << x.first << " \t" << x.second << endl;
    cout << "UMap: " << endl;
    for (auto x : umap)
        cout << x.first << " \t" << x.second << endl;

    sort(v.begin(), v.end());

    cout << "Sorted Vector: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    reverse(v.begin(), v.end()); // reverse the vector
    cout << "Reversed Vector: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;
    cout << "size of vector: " << v.size() << endl;

    v.pop_back();                      // pop the last element from vector
    v.erase(v.begin() + 4);            // erase the 5th element
    v.erase(v.begin(), v.begin() + 3); // erase first 3 elements
    v.clear();                         // erase all element vector
    cout << "New Vector: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    cout << "Max size of vector" << v.max_size() << endl;

    // Find an element in the unordered map
    auto it = umap.find(16);

    // Check if the element is found
    if (it != umap.end()) {
        cout << "Element found: " << it->first << " " << it->second << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
