// Set -> sorted, unique

void explainSet()
{

    set<int> st;
    st.insert(1);  // {1}
    st.emplace(2); // {1,2}
    st.insert(2);  // {1,2}
    st.insert(4);  // {1,2,4}
    st.insert(3);  // {1,2,3,4}

    // Functionality of insert in vector
    // can be used also, that only increases
    // efficiency

    // begin(), end(), rbegin(), rend(), size()
    // empty() and swap() are same as those above

    // {1,2,3,4,5}
    auto it = st.find(3); // points iterator at 3

    auto it = st.find(6);

    st.erase(5); // erases 5 -> takes log time

    int cnt = st.count(1); // gives 0 or 1

    auto it = st.find(3);
    st.erase(it); // it takes constant time

    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after erase {1,4,5} [first,last)

    // lower_bound() ans upper_bound()

    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);

    // comp -> logN
}

// only sorted
void explainMultiSet()
{

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    ms.erase(1); // all 1's erases

    int cnt = ms.count(1);

    ms.erase(ms.find(1)); // only a single one erased

    ms.erase(ms.find(1), ms.fin(1) + 2);
    // rest all function same as set
}

// only Unique

void explainUnorderedSet()
{

    unordered set<int> st;
    // lower_bound and upper_bound functions
    // does not work, rest all functions are same
    // as above, it does not stores in any
    // particular order it has a better complexity
    // than set in most cases, except some when collision happens
}