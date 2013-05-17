#include<iostream>
#include<set>

using namespace std;

//======================================================================
// Insert and del operations are faster than vector, but search and add
// to tail operations are sometimes slower.
//======================================================================

int main()
{
		set<string> str;
		set<string>::iterator pos;
		str.insert("apple");
		str.insert("orange");
		str.insert("banana");
		str.insert("grapes");
		for (pos=str.begin(); pos!=str.end(); pos++)
				cout << *pos << " ";
		cout << endl;
		str.clear();
}
