#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    // cout << v[0];
    v.emplace_back(2);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i].first << " " << vec[i].second << "\n";
    }
    cout << endl;

    vector<int> v1(5, 100); // {100, 100, 100, 100, 100}
    vector<int> v2(v1);     // copy of v1
    v1.push_back(33);
    vector<int> v3(5); // 5 instances of 0 or garbage value

    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " "; // prints 1st index element

    vector<int>::iterator it = v.end();
    vector<int>::iterator it = v.rend();
    vector<int>::iterator it = v.begin();

    cout << v[0];
    cout << v.back();

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << endl;
    }

    for (auto it : v)
    {
        cout << it << " ";
    }

    v.erase(v.begin() + 1);              // {10,20,30} -> {10, 30}
    v.erase(v.begin() + 2, v.end() + 4); // [10,20,12,23, 14] -> [10,20,14]

    // insert funtion
    vector<int> v(2, 100);          // [100, 100]
    v.insert(v.begin(), 200);       // [200,100,100]
    v.insert(v.begin() + 1, 2, 10); // [200,10,10,100,100]

    vector<int> copy(2, 50);
    v.insert(v.begin(), copy.begin(), copy.end()); // [50,50,200,10,10,100,100]

    v.size(); // length of a vector

    v.pop_back(); // [10,20] -> [10]

    // v1-> [10,20]
    // v2-> [30.40]
    v1.swap(v2); // v1->[30.40], v2->[10,20]

    v.clear(); // erases the entire vector
    return 0;
}
