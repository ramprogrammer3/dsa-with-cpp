#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{

    unordered_map<string, int> m;

    // insert using pair in map
    pair<string, int> p = make_pair("scorpio", 9);
    m.insert(p);

    pair<string, int> p2("alto", 2);
    m.insert(p2);

    m["fortuner"] = 10;

    // access

    cout << m.at("alto") << endl;
    cout << m.at("scorpio") << endl;
    cout << m.at("fortuner") << endl;

    cout << m["fortuner"] << endl;
    cout << m["alto"] << endl;
    cout << m["scorpio"] << endl;

    // searching

    cout << m.count("scorpio") << endl;

    if (m.find("alto") != m.end())
    {
        cout << "alto found " << endl;
    }
    else
    {
        cout << "alto not found " << endl;
    }

    cout << m.size() << endl;

    cout << m["hummer"] << endl;
    cout << m.size() << endl;

    cout << "printing all value of map " << endl;

    for (auto i : m)
    {
        cout << i.first << " -> " << i.second << endl;
    }

    cout << "ram kumar " << endl;

    return 0;
}