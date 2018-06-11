/*A final very useful function to use is the function "binary_search" 
which is in the <algorithm> library. 
You can use it on a SORTED vector/string to find 
whether they have an element or a character respectively. 
It returns true if they do have the element, or false other wise. 
Here is an example:*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	vector<int> v;
	v.push_back(10);
	v.push_back(9);
	v.push_back(8);
	sort(v.begin(), v.end()); //vector must be sorted before using the binary_search
	cout << binary_search(v.begin(), v.end(), 5) << endl; //false
	cout << binary_search(v.begin(), v.end(), 9) << endl; //true

	string s = "abcdefghijklmnopqrstyv";
	sort(s.begin(), s.end());
	cout << binary_search(s.begin(), s.end(), 'z') << endl; //false, z not found
	cout << binary_search(s.begin(), s.end(), 'a') << endl; //true, a found!

	system("pause");
	return 0;
}