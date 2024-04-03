// key->value, map stores unique key in sorted order

void explainMap()
{

    map<int, int> mpp;

    map<int, pair<int, int>> mpp;

    map<pair<int, int>, int> mpp;

    mpp[1] = 2;
    mpp.emplace({3, 1});

    mapp.insert({2, 4});

    mpp[{2, 3}] = 10;

    {
        {
            1, 2
        }
        {
            2, 4
        }
        {
            3, 1
        }
    }

    for (auto it : map)
    {
        cout << it.first << " " << it.second << endl;
    }
}