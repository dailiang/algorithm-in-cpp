#include<iostream>
#include<map>

using namespace std;

int main() {
        map < string, float, less<string> > c;   
        // "less<string>" is a function that determines the ordering of the set/map
        c.insert(make_pair("Cafe", 7.75));
        c.insert(make_pair("Banana", 1.72));
        c.insert(make_pair("Pizza", 30.69));
        c["Wine"] = 15.66;   // straitforward, but not efficent
		cout << "c.size() = " << c.size() << endl;
        map<string, float>::iterator pos;
        for(pos = c.begin(); pos != c.end(); pos++)
            cout << pos->first << " " << pos->second << endl;
        c.clear();
		return 0;
}
